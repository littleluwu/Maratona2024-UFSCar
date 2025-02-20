#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int left = 0;
        int answ = 0;

        while (left < n){
            if (s[left] == 'B') {
                left += k;
                answ++;
            }
            else left++;
        }

        cout << answ << endl;
    }
    
    return 0;
}