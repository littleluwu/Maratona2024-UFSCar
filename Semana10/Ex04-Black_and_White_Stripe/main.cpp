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
        int currMin = 0;

        while (right < n){
            if(s[right] == 'W') currMin++;

            if(right >= k-1){
                if (currMin < min) min = currMin;
                if(s[left] == 'W') currMin--;
                left++;
            }

            right++;
        }
        
        cout << min << endl;
    }
    
    return 0;
}