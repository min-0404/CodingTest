#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.size() < b.size()) return true;
    else if(a.size() > b.size()) return false;
    else{
        int a_num = 0;
        int b_num = 0;
        for(int i = 0 ; i < a.size(); i++){
            if(a[i] >= '0' && a[i] <= '9')  a_num += (int)a[i];
        }
        for(int i = 0; i < b.size(); i++){
            if(b[i] >= '0' && b[i] <= '9')  b_num += (int)b[i];
        }
        if(a_num < b_num)   return true;
        else if(a_num > b_num)  return false;
        else{
            return a < b;
        }
    }
}

int main(){
    string arr[50];
    int len;
    cin >> len;
    cin.ignore();
    for(int i = 0 ; i < len; i++){
        string str;
        getline(cin, str);
        arr[i] = str;
    }
    sort(arr, arr + len, compare);
    for(int i = 0 ; i < len; i++)   cout << arr[i] << endl;
}