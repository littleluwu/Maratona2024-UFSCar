#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        int count = int(s.length());

        for(int j = 0; j < s.length()-1; j++){
            if (s[j] == s[j+1]) count = 1;
        }

        cout << count << endl;
    }

    return 0;
}