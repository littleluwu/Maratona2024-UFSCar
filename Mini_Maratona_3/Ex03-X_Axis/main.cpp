#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        vector<int> n;

        int aux;
        for (int j = 0; j < 3; j++){
            cin >> aux;
            n.push_back(aux);
        }
        
        sort(n.begin(),n.end());

        int answ = abs(n.at(0) - n.at(1)) + abs(n.at(2) - n.at(1));

        cout << answ << "\n";
    }

    return 0;
}