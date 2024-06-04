#include <iostream>

using namespace std;

int main(){
    int n, a;
    int count[2] = {0,0};
    int target = -1, max = 2;
    bool sw = 0;

    cin >> n;

    cin >> a;
    target = a;
    count[a-1]++;

    for(int i=1; i < n; i++){
        cin >> a;
        count[a-1]++;

        if (target != a){
            if (sw){
                if (2*min(count[0],count[1]) > max) max = 2*min(count[0],count[1]);
                count[a-1] = 1;
            }
            target = a;
            sw = 1;
        }
    }

    cout << max << endl;

    return 0;
}