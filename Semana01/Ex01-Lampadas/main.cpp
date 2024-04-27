#include <iostream>

using namespace std;

int main(){
    int n, num;
    int a = 0, b = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;
        num == 1 ? a++ : b++;
    }

    cout << (a+b)%2 << '\n' << b%2 << '\n';

    return 0;
}