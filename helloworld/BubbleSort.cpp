#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void sapxepBubbleSort(int A[], int n);

void nhapmang(int A[], int n){
    cout<<"Nhap cac phan tu cua mang: \n";
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        A[i] = rand()%100;
    }
}

void xuatmang(int A[], int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<"\t";
    }
}

void sapxepBubbleSort(int A[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = n-1; j > i; j--){
            if(A[j]>A[j-1]){
                temp = A[j];
                A[j]= A[j - 1];
                A[j -1]= temp;
            }
        }
    }
}

int main(){
    int n = 9;
    int A[n];

    nhapmang(A, n);
    xuatmang(A, n);

    sapxepBubbleSort(A, n);
    cout<<"\nMang sau khi BubbleSort la: \n";
    xuatmang(A, n);
    
    return 0;
}