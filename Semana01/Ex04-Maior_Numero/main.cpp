#include <iostream>

using namespace std;

int main(){
    int a;
    int n = 0;

    cin >> a;
    while (a != 0){
        if (a > n) n = a;
        cin >> a;
    }
    cout << n << '\n';

    return 0;
}