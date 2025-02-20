#include <iostream>

using namespace std;

typedef struct dist_ {
    int dist;
    int end;
} dist;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int max = -1;
        int min = -1;

        int answ = 0;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;

            if (a == 1) min = j;
            if (a == n) max = j;
        }

        dist maxDist;
        if (max-0 < n-max){
            maxDist.dist = max-0+1;
            maxDist.end = 0;
        } else {
            maxDist.dist = n-max;
            maxDist.end = 1;
        }

        dist minDist;
        if (min-0 < n-min){
            minDist.dist = min-0+1;
            minDist.end = 0;
        } else {
            minDist.dist = n-min;
            minDist.end = 1;
        }

        if (maxDist.dist < minDist.dist){
            answ += maxDist.dist;

            int newDist;

            if (maxDist.end == 0){
                newDist = min-max;
            } else {
                newDist = max-min;
            }

            if (newDist < minDist.dist) answ += newDist;
            else answ+= minDist.dist;
        } else {
            answ += minDist.dist;

            int newDist;

            if (minDist.end == 0){
                newDist = max-min;
            } else {
                newDist = min-max;
            }

            if (newDist < maxDist.dist) answ += newDist;
            else answ+= maxDist.dist;
        }
        
        cout << answ << endl;
    }
    
    return 0;
}