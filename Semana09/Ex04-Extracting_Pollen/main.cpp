#include <iostream>
#include <queue>

using namespace std;

int sum_digits(int n){
    int sum = 0;

    while(n > 0){
        sum += n%10;
        n = n/10;
    }

    return sum;
}

int main(){
    int n, k;
    cin >> n >> k;

    priority_queue<int> flowers;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        flowers.push(a);
    }

    for (int i = 1; i < k; i++){
        int max = flowers.top();
        flowers.pop();

        int sum = sum_digits(max);

        flowers.push(max - sum);
    }


    cout << sum_digits(flowers.top()) << endl;

    return 0;
}