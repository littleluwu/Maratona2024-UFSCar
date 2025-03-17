#include <iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    int* arr = (int*)malloc(t*sizeof(int));

    for(int i = 0; i < t-1; i++){
        int a;
        cin >> a;
        arr[a-1] = 1;
    }

    for(int i = 0; i < t; i++){
        if (arr[i] != 1) cout << i+1 << endl;
    }

    return 0;
}