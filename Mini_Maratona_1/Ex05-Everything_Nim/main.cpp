#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int t;

    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        int win = 1;

        cin >> n;

        set<int> a;
        set<int>::iterator itr;

        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;

            a.insert(aux);
        }

        
        while (a.size() > 1){
            int smol = *a.begin();
            set<int> b;
            
            if (smol > 1) break;

            for (itr = a.begin(); itr != a.end(); itr++){
                if (*itr - smol > 0) b.insert(*itr - smol);             
            }

            a = b;
            win *= -1;
        }
        

        if (win == 1) cout << "Alice\n";
        else cout << "Bob\n";
    }

    return 0;
}