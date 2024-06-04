#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m;
    int num;
    int answ;

    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> vec;
        cin >> m;
        for (int j = 0; j < 2*m; j++){
            cin >> num;
            vec.push_back(num);
        }
        answ = 0;
        sort(vec.begin(),vec.end());
        for (int j = 0; j < vec.size(); j+=2){
            answ+=vec.at(j);
        }
        cout << answ << endl;
    }


    return 0;
}