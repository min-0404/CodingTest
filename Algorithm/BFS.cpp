// 편의를 위해서 1부터 시작했음
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool check[8];
vector<int> v[8];

void BFS(int start){
    queue<int> q;
    q.push(start);
    check[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int i = 0; i < v[x].size(); i++){
            if(! check[v[x][i]]){
                q.push(v[x][i]);
                check[v[x][i]] = true;
            }
        }
    }
}
int main(){
    v[1].push_back(2);
    v[2].push_back(1);

    v[1].push_back(3);
    v[3].push_back(1);
    
    v[2].push_back(3);
    v[3].push_back(2);

    v[2].push_back(4);
    v[4].push_back(2);

    v[2].push_back(5);
    v[5].push_back(2);

    v[3].push_back(6);
    v[6].push_back(3);

    v[3].push_back(7);
    v[7].push_back(3);

    v[4].push_back(5);
    v[5].push_back(4);

    v[6].push_back(7);
    v[7].push_back(6);


    BFS(1);
}