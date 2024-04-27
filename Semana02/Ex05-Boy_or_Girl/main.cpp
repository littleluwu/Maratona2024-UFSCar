#include <iostream>
#include <string>

using namespace std;

int main(){
    int aux[26] = {0};
    string s;
    int count = 0;

    cin >> s;
    for (int i = 0; i < s.length(); i++){
        int pos = (int)s.at(i) - 97;
        if (aux[pos] == 0){
            count++;
            aux[pos]++;
        }
    }

    if ((count % 2) == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";

    return 0;
}