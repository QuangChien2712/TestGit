#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void swap(int&, int&);
void QuickSort(int[], int, int);

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

void swap(int& n1, int& n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void QuickSort(int A[], int left, int right){ 
    if(left < right){
    int pivot = A[left];
    int i = left + 1;
    int j = right;  
    do
    {
        while((A[i]<=pivot)&&(i<right)){i++;} 
        while((A[j]>pivot)){j--;}
        if(i<j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
        //hoac if(i<j) swap(A[i], A[j]); (khong co i++, j++: chuong trinh tu dong thuc hien theo lenh while)
    }while(i<j);
    swap(A[left], A[j]);
    if(left < j - 1) QuickSort(A, left, j-1);
    if(j+1 < right) QuickSort(A, j+1, right);
    }
}

int main(){
    int n = 7;
    int A[n];

    nhapmang(A, n);
    xuatmang(A, n);

    QuickSort(A, 0, n-1);
    cout<<"\n\nMang sau khi QuickSort la:";
    xuatmang(A, n);

    return 0;
}