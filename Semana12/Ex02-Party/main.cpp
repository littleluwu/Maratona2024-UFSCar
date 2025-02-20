#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int define_height(vector<int> managers, vector<int> height, int i){
    int manager = managers[i];

    if (manager == -1) return 1;

    if (height[manager-1] > 0) return height[manager-1];

    return define_height(managers, height, manager-1) + 1;
}

int main(){
    int t;
    cin >> t;

    vector<int> managers;
    vector<int> height;

    int max_height = 0;

    for (int i = 0; i < t; i++){
        int a;
        cin >> a;
        
        managers.push_back(a);
        height.push_back(0);
    }

    for (int i = 0; i < t; i++){
        int curr_height = define_height(managers, height, i);

        if (curr_height > max_height) max_height = curr_height;
    }

    cout << max_height << endl;

    
    return 0;
}