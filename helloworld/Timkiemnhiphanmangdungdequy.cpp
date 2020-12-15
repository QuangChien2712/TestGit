#include <iostream>
using namespace std;
void nhapmang(int A[], int n);
void xuatmang(int A[], int n);
void sapxepmang(int A[], int n);
void saochepmang(int A[], int B[], int n);
int timkiemnhiphan(int A[], int n, int x);
int timkiemnhiphandequy(int A[], int x, int left, int right);

void nhapmang(int A[], int n){
    cout<<"Nhap cac phan tu cua mang: \n";
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
}

void xuatmang(int A[], int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<"\t";
    }
}

void sapxepmang(int A[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(A[i]>A[j]){
                temp = A[i];
                A[i]= A[j];
                A[j]= temp;
            }
        }
    }
}

void saochepmang(int A[], int B[], int n){
     for(int i = 0; i < n; i++){
         B[i] = A[i];
     }
}

int timkiemnhiphan(int A[], int n, int x){
    int left = 0;
    int right = n-1;
    int mid;
    while(left <= right)
	{
		mid=(left+right)/2;
		if(A[mid]==x)
			return mid;
		else if(A[mid]>x)
			right=mid-1;
		else
			left=mid+1;
	}
	return -1;
}

int timkiemnhiphandequy(int A[], int x, int left, int right){
    int mid = (left + right)/2;
    if(left > right)
        return -1;
    if(A[mid]==x)
        return mid;
    else if(A[mid]>x)
        return timkiemnhiphandequy(A, x, left, mid - 1);
    else
        return timkiemnhiphandequy(A, x, mid + 1, right);
}

int main(){
    int n = 3;
    int A[n];
    int B[n];
    nhapmang(A, n);
    cout<<"\nMang sau khi nhap la: \n";
    xuatmang(A, n);
    
    sapxepmang(A, n);
    cout<<"\nMang sau khi sap xep la: \n";
    xuatmang(A, n);

    saochepmang(A, B, n);
    cout<<"\nMang sau khi sao chep la: \n";
    xuatmang(B, n);

    int x;
    cout<<"\nNhap x: ";
    cin>>x;

    //int kq = timkiemnhiphan(B, n, x);
    int kq = timkiemnhiphandequy(B, x, 0, n-1);
    if(kq == -1)
        {cout<<"Khong tim thay"<<endl;
        cout<<"\n";}
    else
        {cout<<"Tim thay phan tu A["<<kq<<"] bang "<<x<<endl;
        cout<<"\n";}
    return 0;
}