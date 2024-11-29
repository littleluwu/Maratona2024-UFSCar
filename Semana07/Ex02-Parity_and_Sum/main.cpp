#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        long long high_odd = -1;
        int op = 0;
        long long aux;
        vector<long long> even;

        for (int j = 0; j < n; j++){
            cin >> aux;

            if (aux % 2 == 0) even.push_back(aux);
            else if (aux > high_odd) high_odd = aux;
        }

        sort(even.begin(),even.end(),greater<>());

        while(even.size() > 0 && high_odd != -1){
            aux = *even.begin();

            long long sum = high_odd + aux;
            if (aux < high_odd) even.erase(even.begin());
            if (sum > high_odd) high_odd = sum;

            op++;
        }

        cout << op << "\n";
    }

    return 0;
}