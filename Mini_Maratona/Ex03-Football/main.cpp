#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    char target = '0';
    int count = 0;
    string answ = "NO";

    cin >> s;

    for (string::iterator it = s.begin(); it != s.end(); ++it){
        if (target == *it) count++;
        else {
            target = *it;
            count = 1;
        }
        if (count >= 7) answ = "YES";
    }

    cout << answ << endl;

    return 0;
}