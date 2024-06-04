#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t,n,k;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n >> k;
        vector<int> a;
        
        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            a.push_back(aux);
        }
        sort(a.begin(),a.end());

        int count = 1;
        int max = -1;
        for (int j = 0; j < n-1; j++){
            if ((a[j+1] - a[j]) <= k) count++;
            else count = 1;

            if (count > max) max = count;
        }
        if (max == -1) max = n;
        
        cout << n-max << endl;
    }

    return 0;
}