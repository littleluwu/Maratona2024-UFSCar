#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t, n,m;
    
    cin >> t;

    for (int i = 0; i < t; i++){
        int answ = 0;
        cin >> n >> m;

        answ += ceil(m/2.0);

        n -= (answ*15 - m*4);

        if (n > 0) answ += ceil(n/15.0);

        cout << answ << endl;
    }

    return 0;
}