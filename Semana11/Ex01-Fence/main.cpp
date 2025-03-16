#include <iostream>

using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    int currSum = 0;
    int minSum =  2147483647;
    int minIndex = -1;

    int *fence = (int*)malloc(n*sizeof(int));
    int windowStart = 0;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        fence[i] = a;

        currSum+= a;

        if (i >= k-1){
            if (currSum < minSum) {
                minSum = currSum;
                minIndex = windowStart;
            }

            currSum -= fence[windowStart];
            windowStart++;
        }

        
    }


    cout << minIndex+1 << endl;
    
    return 0;
}