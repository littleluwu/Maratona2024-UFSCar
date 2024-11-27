#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int a;
    int gift[n];
    for (int i = 0; i < n; i++){
        cin >> a;
        gift[a-1] = i+1;
    }

    for (int i = 0; i < n; i++){
        cout << gift[i];
        if (i < n-1) cout << " ";
    }
    cout << endl;

    return 0;
}