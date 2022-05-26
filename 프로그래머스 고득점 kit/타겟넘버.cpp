#include <iostream>
#include <vector>
using namespace std;
bool visited[20];
vector<int> numbers;
int target;

void DFS(vector<int> numbers, int answer, int target, int len, int s ){
    if()

    DFS(numbers, answer, target, len, i++);

}

int solution(vector<int> numbers, int target){
    numbers = {1,1,1,1};
    target = 3;
    int answer = 0;
    int len = numbers.size();
    DFS(numbers, answer, target, 0, 0);
    cout << answer <<  " ";
}
