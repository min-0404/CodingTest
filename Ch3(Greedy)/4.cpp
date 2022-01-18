// 1이 될때 까지
#include <iostream>
using namespace std;

int main(){
    int N, K;
    int count = 0;
    cin >> N >> K;
    
    while(1){
        if(N % K){
            N = N - 1;
            count++;
        }
        else{
            N = N / K;
            count++;
        }
        if(N == 1)  break;
    }
    cout << count;
}