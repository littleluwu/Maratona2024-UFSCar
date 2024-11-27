#include <iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int a, b, c;
        int* low = NULL;   

        cin >> a >> b;
        if (a < b) low = &a;
        else low = &b;

        cin >> c;
        if (*low > c) low = &c;

        for (int j = 0; j < 5; j++){
            *low = *low + 1;
            if (a < *low) low = &a;
            if (b < *low) low = &b;
            if (c < *low) low = &c;
        }

        cout << a * b * c << "\n";
    }

    return 0;
}