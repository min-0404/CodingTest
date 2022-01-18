// 숫자 카드 게임
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int max_value = 0;
    for(int i = 0; i < N; i++){
        int min_value = 100001;
        for(int j = 0; j < M; j++){
            int x;
            cin >> x;
            min_value = min(min_value, x);
        }
        max_value = max(max_value, min_value);
    }
    
    cout << max_value;
}
