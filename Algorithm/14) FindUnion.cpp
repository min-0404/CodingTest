#include <iostream>
using namespace std;

int getparent(int* arr, int node){
    if(arr[node] == node)
        return node;
    return getparent(arr, arr[node]);
}

void unionparent(int* arr, int a, int b){
    a = getparent(arr, a);
    b = getparent(arr ,b);
    if(a < b)   arr[b] = a;
    else    arr[a] = b;
}

bool find(int* arr, int a, int b){
    a = getparent(arr, a);
    b = getparent(arr, b);
    if(a == b)  return true;
    else    return false;
}

int main(){
    int parent[9];
    for(int i = 0; i < 9; i ++)
        parent[i] = i;

    unionparent(parent, 1, 2);
    unionparent(parent, 2, 3);
    unionparent(parent, 3, 4);
    unionparent(parent, 5, 6);
    unionparent(parent, 6, 7);
    unionparent(parent, 7, 8);

    cout << "1과 5는 연결되어있나?" << endl;
    cout << find(parent, 1, 5) << endl;

    unionparent(parent, 1, 8);
    cout << "이제 1과 5는 연결되어있나?" << endl;
    cout << find(parent, 1, 8) << endl;

}
