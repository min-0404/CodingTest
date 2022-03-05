#include <iostream>
#include <vector>
using namespace std;
#define INF 1e9 // 10억

int n; // 정점 개수
int m; // 간선 개수
int start; // 시작 정점
vector<pair<int, int>> v[100001];

bool check[100001];
int result[100001];

int getSmall(){
    for(int i = 0; i < )
    
}

void Dijkstra(int start){

    result[start] = 0;
    check[start] = true;
    for(int i = 0; i < v[start].size(); i++){ // 일단 start 중심으로 초기화
        result[v[start][i].first] = v[start][i].second; 
    }

    for(int i = 0; i < n-1; i++){
        int current = getSmall();
        check[current] = true;
        for(int j = 0; v[current].size(); j++){
            int cost = result[current] + v[current][j].first;
            if(cost < result[j])    result[j] = result[current] + v[current][j].first;
        }
    }    
}