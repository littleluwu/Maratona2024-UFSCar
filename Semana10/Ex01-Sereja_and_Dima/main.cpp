#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *table = (int*)malloc(n*sizeof(int));

    int score[2] = {0,0};

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        table[i] = a;
    }
    
    int first = 0;
    int last = n-1;
    for (int i = 0; i < n; i++){
        if (table[first] > table[last]){
            score[i%2] += table[first];
            first++;
        } else {
            score[i%2] += table[last];
            last--;
        }
    }

    cout << score[0] << ' ' << score[1] << endl;
    
    return 0;
}