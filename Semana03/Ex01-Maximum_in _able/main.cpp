#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    int a = 2*n-2;
    int b = n-1;
    double s = 1;

    //C(a,b) using binomial coefficient formula 
    for (int i = 1; i <= b; i++){
        s = s * (a - b + i) / i;
    }

    cout << (int)s << endl;

    return 0;
}