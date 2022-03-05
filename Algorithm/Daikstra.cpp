#include <iostream>
using namespace std;

int number = 6;
int INF = 9999;

bool check[6];
int result[6];
int arr[6][6] ={
    {0, 2, 5, 1, INF, INF},
    {2, 0, 3, 2, INF, INF},
    {5, 3, 0, 3, 1, 5},
    {1, 2, 3, 0, 1, INF},
    {INF, INF, 1, 1, 0, 2},
    {INF, INF, 5, INF, 2, 0}
} ;

int getSmallest(){
    int min = INF;
    int index = 0;
    for(int i = 0; i < number; i++){
        if(result[i] < min && !check[i]){
            min = result[i];
            index = i;
        }
    }
    return index;
}

void Dijkstra(int start){

    for(int i = 0; i < number; i++)  result[i] = arr[start][i]; // 가장 먼저, result 초기화
    check[start] = true;

    for(int i = 0; i < number - 1; i++){ // current 선택횟수는 정점 -1 번이므로 number -1 임
        int current = getSmallest();
        check[current] = true;

        for(int j = 0; j < number; j++){
            if(!check[j]){
                if(result[j] > result[current] + arr[current][j])   result[j] = result[current] + arr[current][j];
            }
        }
    }
}


