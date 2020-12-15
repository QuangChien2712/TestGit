#include <stdio.h>
void nhapmang(int A[], int n){
    puts("\nXin moi nhap cac gia tri cua mang: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
}
void xuatmang(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", A[i]);
    }
}
void sapxepmang(int A[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(A[i]<A[j]){
                temp = A[i];
                A[i]= A[j];
                A[j]= temp;
            }
        }
    }
}
void timkiemmang(int A[], int n, int x){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(x==A[i]){
            printf("\nTim duoc phan tu array[%d] trong mang co gia tri %d", i, A[i]);
            dem = dem + 1;
        }
    }
    if(0==dem) printf("\nKhong co phan tu nao bang %d", x);
}
int main(){
    int n = 4;
    int A[n];
    nhapmang(A, n);
    puts("\nMang sau khi nhap la: ");
    xuatmang(A, n);
    sapxepmang(A, n);
    puts("\nMang sau khi sap xep la: ");
    xuatmang(A, n);
    timkiemmang(A, n, 7);
    return 0;
}
//Chuong trinh tao cac gia tri mang ngau nhien
/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void nhapmang(int A[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        A[i] = rand()%100;
    }
}
void xuatmang(int A[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", A[i]);
    }
}
void sapxepmang(int A[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(A[i]<A[j]){
                temp = A[i];
                A[i]= A[j];
                A[j]= temp;
            }
        }
    }
}
void timkiemmang(int A[], int n, int x){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(A[i]==x){
            printf("\nTim duoc phan tu thu %d trong mang co gia tri %d", i, A[i]);
            dem = dem + 1;
        }
    }
    if(0==dem) printf("\nKhong co phan tu nao bang %d", x);
}
int main(){
    int n = 10;
    int A[n];
    nhapmang(A, n);
    puts("\nMang sau khi nhap la: ");
    xuatmang(A, n);
    sapxepmang(A, n);
    puts("\nMang sau khi sap xep la: ");
    xuatmang(A, n);
    timkiemmang(A, n, 56);
    return 0;
}*/