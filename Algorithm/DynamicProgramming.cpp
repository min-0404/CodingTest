#include <iostream>
using namespace std;

int fibo(int x){ // O(2^N) : 너무 느림
    if(x == 1)  return 1;
    if(x == 2)  return 1;
    return fibo(x-1) + fibo(x-2);
}

int d[100];

int dynamic(int x){ // O(N)
    if(x == 1)  return 1;
    if(x == 2)  return 1;
    if(d[x] != 0)   return d[x];
    d[x] = dynamic(x-1) + dynamic(x-2);
    return  d[x];
}


int main(){
    cout << dynamic(30) << endl;
    cout << "hello world";
}
