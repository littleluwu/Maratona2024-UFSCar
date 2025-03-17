#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;

    vector<long long> arr;
    arr.push_back(0);

    for (long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        arr.push_back(arr[i] + a);
    }

    for(long long i = 0; i < q; i++){
        long long a, b;
        cin >> a >> b;

        cout << arr[b] - arr[a-1] << endl;
    }

    return 0;
}