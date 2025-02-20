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
        int right = 0;

        int min = n;

        while (left <= n-k){
            int curr = 0;
            right = left;

            while (right < left+k){
                if (s[right] == 'W') curr++;
                right++;
            }
            
            if (curr < min) min = curr;
            if (min == 0) break;
            left++;
        }

        cout << min << endl;
    }
    
    return 0;
}