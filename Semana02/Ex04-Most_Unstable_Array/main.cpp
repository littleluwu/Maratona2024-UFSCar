#include <iostream>

using namespace std;

int main(){
    int n;
    int a,b;

    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> a >> b;
        cout << min(2,a-1) * b << '\n';  
    }

    return 0;
}