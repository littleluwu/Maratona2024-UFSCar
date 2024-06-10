#include <iostream>
#include <list>

using namespace std;

int main(){
    int t;
    bool f = 0;
    char s;
    list<char> a;

    cin >> t;
    if (t%2 != 0) f = 1;

    for (int i = 0; i < t; i++){
        cin >> s;
        if(f) a.push_back(s);
        else a.push_front(s);

        f = !f;
    }

    for (list<char>::iterator it = a.begin(); it != a.end(); it++){
        cout << *it;
    }

    cout << endl;

    return 0;
}