#include <iostream>

using namespace std;

int main(){
    int n;
    char a = ' ';
    char b = ' ';
    int s = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == b) s++;
        b = a;
    }

    cout << s << '\n';

    return 0;
}