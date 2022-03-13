// 0, 1, 1, 2, 3, 5...

#include <iostream>
using namespace std;

// 방법 1
int recursive_Fibo(int x){ // O(2^N)
    if(x == 1)  return 0;
    if(x == 2)  return 1;
    return recursive_Fibo(x-1) + recursive_Fibo(x-2); 
}

// 방법 2
int result[9999];
int dynamic_Fibo(int x){ // O(N^2) 
    if(x == 1)  return 0;
    if(x == 2)  return 1;
    if(!result[x])   return result[x];
    result[x] = dynamic_Fibo(x-1) + dynamic_Fibo(x-2);
    return result[x];
}

// 방법 3
int result2[9999];
int iterative_Fibo(int x){ // O(N)
    for(int i = 2; i < x; i++){
        result2[i] = result2[i-1] + result2[i-2];
    }
    return result2[x-1] + result2[x-2];
}

int main(){
    result2[1] = 0;
    result2[2] = 1;

    cout << iterative_Fibo(10);
}

