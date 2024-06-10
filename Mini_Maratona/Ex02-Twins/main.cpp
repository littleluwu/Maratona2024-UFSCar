#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t, n;
    int count = 0;
    int a = 0, b = 0;

    cin >> t;
    vector<int> coins;

    for (int i = 0; i < t; i++){
        cin >> n;
        coins.push_back(n);
        a+=n;
    }

    sort(coins.begin(),coins.end(),greater<int>());

    for (int i = 0; i < t; i++){
        if (b <= a){
            b+=coins[i];
            a-=coins[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}