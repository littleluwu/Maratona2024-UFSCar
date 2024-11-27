#include <iostream>
#include <map>

using namespace std;

int main(){
    long n,m, aux;
    map <long,long> a;
    map <long,long> b;
    long long sum_a = 0;
    long long sum_b = 0;

    cin >> n;

    for (long i = 0; i < n; i++){
        cin >> aux;

        a[aux] = i+1;
        b[aux] = n-i;
    }

    cin >> m;

    for (long i = 0; i < m; i++){
        cin >> aux;

        sum_a += a[aux];
        sum_b += b[aux];
    }

    cout << sum_a << " " << sum_b << endl;

    return 0;
}