// 병합 정렬 : O(NlogN), 그 어떤 경우에도 항상 보장됨
// 단점 : 배열 크기 만큼 추가 공간 필요
#include<iostream>
using namespace std;

void Merge(int* arr, int start, int middle, int end){
    int* temp = new int[end - start + 1];
    int i = start;
    int j = middle + 1;
    int k = start;

    // 1단계. 두개로 나눈 배열을 비교해가면서 temp배열 완성
    while(i <= middle && j <= end){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    
    // 2단계. 남은 쩌리짱 뒷처리
    if(i > middle){ // j쪽 배열 원소들이 남았을 때 뒷처리
        for(int t = j; t <= end; t++){
            temp[k] = arr[t];
            k++;
        }
    }
    else{
        for(int t = i; t <= middle; t++){ // i쪽 배열 원소들이 남았을 때 뒷처리
            temp[k] = arr[t];
            k++;
        }
    }

    // 3단계. 완성한 temp 배열을 고대로 기존 배열에 복사
    for(int t = start; t <= end; t++){
        arr[t] = temp[t];
    }
    delete[] temp; // 이제 필요없음
}

// 기본원리 : middle 선정해서 middle 기준으로 두 개 배열로 나누고, 각각 Sort때린뒤, Merge로 전체를 합침
void MergeSort(int* arr, int start, int end){
    if(start < end){
        int middle = (start + end) / 2;
        MergeSort(arr, start, middle);
        MergeSort(arr, middle + 1, end);
        Merge(arr, start, middle, end);
    }
}


int main(){
    int x[] = {10, 5, 3, 8, 2};
    MergeSort(x, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << x[i] << " ";
    }

}

