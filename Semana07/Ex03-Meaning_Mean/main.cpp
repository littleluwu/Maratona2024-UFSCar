#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i ++){
        int n;

        cin >> n;

        vector<int> a;

        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            a.push_back(aux);
        }

        while(a.size() > 2){
            sort(a.begin(),a.end());

            int x = *a.begin();
            int y = *(a.begin()+1);

            a.erase(a.begin());
            a.erase(a.begin());
            
            a.push_back((x+y)/2);
        }

        cout << (*a.begin() + *(a.end()-1))/2 << "\n";
    }

    return 0;
}