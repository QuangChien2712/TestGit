#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void sapxepInsertionSort(int A[], int n);

void nhapmang(int A[], int n){
    cout<<"Nhap cac phan tu cua mang: \n";
    srand(time(NULL));
    for(int i = 0; i<n; i++){
    A[i] = rand()%1000;
    }
}

void xuatmang(int A[], int n){
    for(int i = 0; i<n; i++){
    cout<<A[i]<<"\t";
    }
}

void sapxepInsertionSort(int A[], int n){
    int x;
    int pos = 0;
    for(int i = 1; i < n; i++){
    x=A[i];
        for(pos = i; (pos>0)&&(A[pos - 1]>x); pos--){
        A[pos]= A[pos-1];
        }
    A[pos]=x;
    }
}

int main(){
    int n = 9;
    int A[n];

    nhapmang(A, n);
    xuatmang(A, n);

    sapxepInsertionSort(A, n);
    cout<<"\nMang sau khi BubbleSort la: \n";
    xuatmang(A, n);
    
    return 0;
}