#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void sapxepQuickSort(int[], int, int);

void nhapmang(int A[], int n){
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        A[i] = rand()%100;
    }
}

void xuatmang(int A[], int n){
    cout<<"\nXuat mang \n";
    for(int i = 0; i<n; i++){
        cout<<A[i]<<"\t";
    }
}

void sapxepQuickSort(int A[], int left, int right){
    if(left>=right) return;
    int pivot;
    int i = left;
    int j = right;
    pivot = A[(left + right)/2];
    do{
        while((A[i]<=pivot)&&(i<(left + right)/2)) i++;
        while(A[j]>pivot) j--;
        if(i<=j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    } while(i<j);
    sapxepQuickSort(A, left, j);
    sapxepQuickSort(A, i, right);
}

int main(){
    int n = 5;
    int A[n];

    nhapmang(A, n);
    xuatmang(A, n);

    sapxepQuickSort(A, 0, n-1);
    cout<<"\n\nMang sau khi QuickSort la:";
    xuatmang(A, n);

    return 0;
}