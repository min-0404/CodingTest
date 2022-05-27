#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1000001];

int main(){
    cin >> n;
    for(int i = 1; i <= n ; i++){
        dp[i] = i;
    }
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i/2]);
        }
        if(i % 3 == 0 ){
            dp[i] = min(dp[i], dp[i/3]);
        }
        dp[i] = min(dp[i], dp[i-1]) + 1;
    }
    cout << dp[n] - 1 << endl; 

    while(1){
        cout << n << " ";
        if(n == 1)  break;
        if(n % 2 == 0 && dp[n] > dp[n/2]){
            n = n / 2;
        }
        else if(n % 3 == 0 && dp[n] > dp[n/3]){
            n = n / 3;
        }
        else{
        n = n - 1;}
    }
}