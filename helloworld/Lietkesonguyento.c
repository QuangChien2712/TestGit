#include <stdio.h>
int main(){
	int n;
	printf("%s", "Nhap so nguyen duong n: ");
	scanf("%u", &n);
	if(n<=0){ puts("Nhap khong hop le, nhap lai");
	printf("%s", "Nhap so nguyen duong n: ");
	scanf("%u", &n);}
	if(n>0)
	{
	for(int i = 1; i <= n; i++){
		if(i>=1&&i<=3) printf("%u\n", i);	
		if(i>=4){
			int dem = 0;
			int j;
			for(j = 2; j <= i/2; j++){
				if(i%j == 0) dem = dem + 1;
			}
			if(dem == 0) printf("%u\n", i);
		}	
	}
}
	return 0;
}