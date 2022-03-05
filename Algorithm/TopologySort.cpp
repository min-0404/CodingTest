#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 10
using namespace std;

int inDegree[MAX];
vector<int> v[8];
int n;

void topologySort(){
    queue<int> q;
    for(int i = 1; i <= n; i++)
        if(inDegree[i] == 0) 
            q.push(i);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";

        for(int i = 0; i < v[x].size(); i++){
            inDegree[v[x][i]]--;
            if(inDegree[v[x][i]] == 0){
                q.push(v[x][i]);
            }
        }
    }

}

int main(){
    n = 7;
    v[1].push_back(2);
    inDegree[2]++;

    v[1].push_back(5);
    inDegree[5]++;
    
    v[2].push_back(3);
    inDegree[3]++;

    
    v[3].push_back(4);
    inDegree[4]++;

    v[4].push_back(6);
    inDegree[6]++;

    v[5].push_back(6);
    inDegree[6]++;

    v[6].push_back(7);
    inDegree[7]++;

    topologySort();


}