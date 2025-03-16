#include <iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        int x, y, k;

        cin >> x >> y >> k;

        int m = min(x, y);

        cout << "0 0 " << m << " " << m << endl;
        cout << "0 " << m << " " << m << " 0" << endl;
    }

    return 0;
}