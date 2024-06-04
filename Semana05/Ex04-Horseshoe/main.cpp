#include <iostream>
#include <unordered_map> 

using namespace std;

int main(){
    unordered_map <int,int> m;
    int a;
    int answ = 0;


    for (int i=0; i < 4; i++){
        cin >> a;
        auto find = m.find(a);
        if (find != m.end()) answ++;
        m[a] = 1;
    }

    cout << answ << endl;

    return 0;
}