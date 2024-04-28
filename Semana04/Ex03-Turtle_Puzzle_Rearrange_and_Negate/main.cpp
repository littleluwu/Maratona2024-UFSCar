#include <iostream>

using namespace std;

int main(){
    int n,m,s;
    int a;

    cin >> n;
    for (int i = 0; i < n; i++){
        s = 0;
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> a;
            s += abs(a);
        }
        cout << s << endl;
    }

    return 0;
}