#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void sapxepSelectionSort(int A[], int n);

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

void sapxepSelectionSort(int A[], int n){
    int min;
    int temp;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(A[j]<A[min])
                min = j;
            }
        if(min!=i){
            temp = A[min];
            A[min]= A[i];
            A[i]= temp;
        }
    }
}

int main(){
    int n = 9;
    int A[n];

    nhapmang(A, n);
    xuatmang(A, n);

    sapxepSelectionSort(A, n);
    cout<<"\nMang sau khi BubbleSort la: \n";
    xuatmang(A, n);
    
    return 0;
}