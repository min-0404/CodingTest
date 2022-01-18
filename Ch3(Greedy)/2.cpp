// 큰 수의 법칙
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n;
    int M;
    int K;
    cin >> n >> M >> K;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x); 
    }
    
    vector<int>::iterator it;
    
    sort(v.begin(), v.end()); // 벡터 전체 정렬 시키기
    // v.end() 가 마지막 원소 다음을 가리키는 것은 신경쓰지 않아도 된다
    int first = v[n-1];
    int second = v[n-2];
    int number = M / (K + 1);
    int left = M % (K + 1);

    int result = (first * K + second) * number + (left * first);
    cout << result;


}