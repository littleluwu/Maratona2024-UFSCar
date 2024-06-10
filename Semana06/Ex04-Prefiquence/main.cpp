#include <iostream>

using namespace std;

int main(){
    int t;
    int n, m;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        string a;
        string b;

        cin >> a >> b;
        int p = 0;
        int q = 0;

        while(p < n && q < m){
            if(a.at(p) == b.at(q)) p++;
            q++;
        }

        cout << p << endl;
    }

    return 0;
}