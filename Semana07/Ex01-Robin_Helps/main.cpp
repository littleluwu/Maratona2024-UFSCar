#include <iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n, k;
        int g = 0;
        int answ = 0;

        cin >> n >> k;

        for (int j = 0; j < n; j++){
            int a;

            cin >> a;

            if (a >= k) g += a;
            if (a == 0 && g > 0) {
                answ += 1;
                g -= 1;
            }

        }

        cout << answ << "\n";
    }

    return 0;
}