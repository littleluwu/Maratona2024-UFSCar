#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, k;
    long long a, b;
    long long sum = 0;
    vector<long> gain;

    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> a >> b;

        sum += min(a,b);
        gain.push_back(min(a,max(b-a,(long long)0)));
    }

    sort(gain.begin(),gain.end(), greater<long long>());

    for (int i = 0; i < k; i++){
        sum += gain[i];
    }

    cout << sum << endl;

    return 0;
}