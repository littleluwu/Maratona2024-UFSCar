#include <iostream>

using namespace std;

struct val{
    int x;
    int y;
};

val frac(int x){
    val ret;
    if (x == 0) ret = {1,1};
    else {
        ret = frac(x-1);
        ret.x += ret.y;

        int aux = ret.x;
        ret.x = ret.y;
        ret.y = aux;
    }

    return ret;
}

int main(){
    int t;
    cin >> t;

    val answ = frac(t);

    cout << answ.x << "\n";

    return 0;
}