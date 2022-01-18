// 거스름돈
#include <iostream>
using namespace std;

int main(){
    int money;
    cin >> money;

    int coin_type[4] = {500, 100, 50, 10};
    int count = 0;
    
    for(int i = 0; i < 4; i++){
        count += money / coin_type[i];
        money = money % coin_type[i];
    }
    cout << count;
}