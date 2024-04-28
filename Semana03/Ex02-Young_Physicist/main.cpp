#include <iostream>

using namespace std;

int main(){
    int n;
    int x,y,z;
    int a,b,c;

    cin >> n;
    cin >> x >> y >> z;
    for (int i = 1; i < n; i++){
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }

    if (!x && !y && !z) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}