#include <iostream>

using namespace std;

int main(){
    int n, h;
    int a, b = 0;

    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a > h) b++;
        b++;
    }

    cout << b << '\n';

    return 0;
}