#include <stdio.h>
void chuyenthap(int, char, char, char);
void chuyenthap(int n, char A, char B, char C){
    if(1==n)
        printf("\n%c -> %c", A, C);
    else
	{
        chuyenthap(n-1, A, C, B);
		chuyenthap(1, A, B, C);
        chuyenthap(n-1, B, A, C);
    }
}
int main(){
    int n = 3;
    chuyenthap(n, 'A', 'B', 'C');
    return 0;
}