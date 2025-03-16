#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if ((a+b+c) %2 == 1) cout << -1 << endl;
        else cout << min((a+b+c)/2,a+b) << endl;
    }
    
    return 0;
}