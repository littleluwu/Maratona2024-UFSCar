#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a;
    bool answ = 0;
    vector<int> line;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        line.push_back(a);
    }

    sort(line.begin(),line.end());

    for (int i = 0; i < n-2; i++){
        if (line[i] + line[i+1] > line[i+2]) answ = 1;
    }

    if (answ) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}