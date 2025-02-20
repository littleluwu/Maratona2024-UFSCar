#include <iostream>

using namespace std;

int main(){

    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        int sumCoins = 0;

        cin >> n;

        string a;
        cin >> a;

        string::iterator it;
        for(it = a.begin(); it != a.end(); ++it){
            if (*it == '@') sumCoins++;
            if (*it == '*' && *(it-1) == '*') break;
        }

        cout << sumCoins << endl;

    }

    return 0;
}