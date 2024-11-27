#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main(){
    int nNames;
    long long hash;
    string request;
    map <string,int> names;
 
    cin >> nNames;
 
    for (int i = 0; i < nNames; i++){
        cin >> request;
        if (names[request] == 0){
            cout << "OK\n";
            names[request]++;
        }
        else {
            cout << request << names[request] << '\n';
            names[request]++;
        }
    }
 
    return 0;
}