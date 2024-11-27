#include <iostream>

using namespace std;

int main(){
    int n;
    int a, b;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a >> b;

        if((a < b) || (a%2 != b%2)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}