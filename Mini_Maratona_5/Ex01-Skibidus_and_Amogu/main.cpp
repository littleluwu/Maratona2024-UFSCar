#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        s.erase(s.end()-2,s.end());

        cout << s + "i" << endl;
    }
    
    return 0;
}