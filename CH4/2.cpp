#include <iostream>
using namespace std;

bool check(int hour, int minute, int second){
    if(hour % 10 == 3 || minute / 10 == 3 || minute % 10 == 3 || second / 10 == 3 || second % 10 == 3)
        return true;
    else
        return false;
}

int main(){
    int N;
    cin >> N;
    int count = 0;
    for(int i = 0; i <= N; i ++){
        for(int j = 0; j <=60 ; j++){
            for(int k = 0; k <= 60; k++){
                if(check(i, j, k))    count++;
            }
        }
    }
    cout << count;
}