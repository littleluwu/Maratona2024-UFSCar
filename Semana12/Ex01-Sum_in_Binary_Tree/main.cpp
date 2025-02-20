#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        long long a;
        cin >> a;

        long long sum = 0;

        while (a > 0){
            sum += a;
            a = a/2;
        }

        cout << sum << endl;
    }
    
    return 0;
}