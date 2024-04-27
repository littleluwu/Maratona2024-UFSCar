#include <iostream>

using namespace std;

int main(){
    int a,b;

    cin >> a;
    cin >> b;

    if (!a) cout << "C" << '\n';
    else {
        if (!b) cout << "B" << '\n';
        else cout << "A" << '\n';
    }

    return 0;
}