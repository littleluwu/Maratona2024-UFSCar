#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int counter[3] = {0};
    string s;
    bool start = 1;

    cin >> s;
    counter[0] = count(s.begin(), s.end(), '1');
    counter[1] = count(s.begin(), s.end(), '2');
    counter[2] = count(s.begin(), s.end(), '3');

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < counter[i]; j++){
            cout << i+1;
            start = 0;
            if (j+1 < counter[i]) cout << "+";
        }
        if ((i+1 < 3) && (0 != counter[i+1]) && (!start)) cout << "+";
    }
    cout << endl;

    return 0;
}