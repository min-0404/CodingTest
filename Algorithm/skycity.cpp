#include <iostream>
#define INF 1e9
using namespace std;

int N;
int M;
int arr[101][101];

int X;
int K;


int main(){
    cin >> N >> M;
    
    // 1단계
    for(int i = 0; i < 101; i++)    fill(arr[i], arr[i] + 101, INF);

    // 2단계
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            if(i == j)  arr[i][j] = 0;

    // 3단계
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;

    }

    // 4단계
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }

    cin >> X >> K;
    int distance = arr[1][K] + arr[K][X];
    if(distance >= INF) cout << -1;
    else cout << distance;
}

