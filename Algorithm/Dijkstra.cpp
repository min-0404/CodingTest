#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int number = 6;
int INF = 9999;

vector<pair<int, int>> v[6]; // 간선 정보
int result[6]; 

void Dijkstra(int start){
    

}



int main(){
    for(int i = 0; i < number; i++){
        result[i] = INF;
    }
    
    v[0].push_back(make_pair(1,2));
    v[0].push_back(make_pair(2,5));
    v[0].push_back(make_pair(3,1));


    v[1].push_back(make_pair(0,2));
    v[1].push_back(make_pair(2,3));
    v[1].push_back(make_pair(3,2));
    
    v[2].push_back(make_pair(0,5));
    v[2].push_back(make_pair(1,3));
    v[2].push_back(make_pair(3,3));
    v[2].push_back(make_pair(4,1));
    v[2].push_back(make_pair(5,5));
    
    v[3].push_back(make_pair(0,1));
    v[3].push_back(make_pair(1,2));
    v[3].push_back(make_pair(2,3));
    v[3].push_back(make_pair(4,1));
    
    v[4].push_back(make_pair(2,1));
    v[4].push_back(make_pair(3,1));
    v[4].push_back(make_pair(5,2));
    
    v[5].push_back(make_pair(2,5));
    v[5].push_back(make_pair(4,2));

    Dijkstra(0);
    for(int i = 0; i < number; i++) cout << result[i] << " " ;

}
