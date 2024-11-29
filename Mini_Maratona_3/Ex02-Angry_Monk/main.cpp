#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n, k;

        cin >> n >> k;

        vector<int> a;
        int answ = 0;
        int aux;

        for (int j = 0; j < k; j++){
            cin >> aux;
            a.push_back(aux);
        }

        sort(a.begin(),a.end());

        for (int j = 0; j < k-1; j++){
            aux = a.at(j);
            if (aux > 1) answ += aux + (aux-1);
            else answ += 1;
        }

        cout << answ << "\n";
        
    }

    return 0;
}