#include <iostream>

using namespace std;

int main(){
    int n, m;
    int a;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        int odd = 0, even = 0;
        for(int j = 0; j < m; j++){
            cin >> a;
            if(j%2 != a%2){
                if (a%2) odd++;
                else even++;
            }
        }

        if(odd != even) cout << -1 << endl;
        else cout << even << endl;
    }

    return 0;
}