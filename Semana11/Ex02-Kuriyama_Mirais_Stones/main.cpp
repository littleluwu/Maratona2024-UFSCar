#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v;
    vector<long long> u;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        v.push_back(a);
        u.push_back(a);
    }

    sort(u.begin(),u.end());

    int m;
    cin >> m;

    for (int i = 0; i < m; i++){
        int type, l, r;
        cin >> type >> l >> r;

        long long sum = 0;
        if (type == 1){
            for (; l <= r; l++) sum += v[l-1];
        } else {
            for (; l <= r; l++) sum += u[l-1];
        }

        cout << sum << endl;
    }
    
    return 0;
}