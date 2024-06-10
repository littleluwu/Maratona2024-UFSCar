#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    int a, b;
    int sum = 0;
    vector<int> gain;

    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> a >> b;

        if (a > b){
            sum += b;
            gain.push_back(0);
        }
        else {
            sum += a;
            if (a > b-a) gain.push_back(b-a);
            else gain.push_back(a);
        }
    }

    sort(gain.begin(),gain.end(), greater<int>());

    for (int i = 0; i < k; i++){
        sum += gain[i];
    }

    cout << sum << endl;

    return 0;
}