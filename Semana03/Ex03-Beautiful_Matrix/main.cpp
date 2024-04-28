#include <iostream>

using namespace std;

int main(){
    int x,y;
    int a;

    for (int i = 0; i < 25; i++){
        cin >> a;
        if (a == 1){
            y = i%5;
            x = i/5;
        }
    }

    cout << abs(2-x) + abs(2-y) << '\n';

    return 0;
}