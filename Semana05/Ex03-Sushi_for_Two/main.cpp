#include <iostream>

using namespace std;

int main(){
    int n, a;
    int count[2] = {0,0};
    int target = -1, max = 0;

    cin >> n;

    cin >> a;
    target = a;
    count[a-1] = 1;

    for(int i=1; i < n; i++){
        cin >> a;
        
        if (target != a){
            if (min(count[0],count[1]) > max) max = min(count[0],count[1]);
            count[a-1] = 1;
            target = a;
        } else count[a-1]++;
    }
    
    if (min(count[0],count[1]) > max) max = min(count[0],count[1]);
    
    cout << 2*max << endl;

    return 0;
}