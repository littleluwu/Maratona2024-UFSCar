#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    int counter[7] = {0};

    cin >> t;

    for (int i = 0; i < t; i++){
        int n, m;
        string s;

        cin >> n >> m;
        cin >> s;

        for (string::iterator j = s.begin(); j != s.end(); ++j){
            switch(*j){
                case 'A': counter[0]++; break;
                case 'B': counter[1]++; break;
                case 'C': counter[2]++; break;
                case 'D': counter[3]++; break;
                case 'E': counter[4]++; break;
                case 'F': counter[5]++; break;
                case 'G': counter[6]++; break;
            }
        }
        int answ = 0;
        for (int j = 0; j < 7; j++){            
            if (counter[j] < m) answ += m - counter[j];
            counter[j] = 0;
        }
        cout << answ << endl;
    }

    return 0;
}