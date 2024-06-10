#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n,m;

        cin >> n >> m;

        int a[n], b;

        for (int j = 0; j < n; j++){
            cin >> a[j];
        }

        for (int j = 0; j < m; j++){
            cin >> b;
            cout << min(a[0]-1,b);
            if (j+1 < m) cout << " ";
        }
        cout << endl;
    }

    return 0;
}