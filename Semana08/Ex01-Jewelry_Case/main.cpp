#include <iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    int large = -1;
    int posX = -1;
    int posY = -1;

    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            int aux;
            cin >> aux;

            if (aux > large){
                posX = i;
                posY = j;
                large = aux;
            }
        }
    }

    if(posX == 0){
        if (posY == 0) cout << "2\n";
        else cout << "3\n";
    } else {
        if (posY == 0) cout << "1\n";
        else cout << "0\n";
    }
    
    return 0;
}