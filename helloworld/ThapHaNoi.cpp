#include <iostream>
using namespace std;
void chuyenthap(int n,char A,char B,char C)
{
	if(1==n)
		cout<<A<<" -> "<<C<<endl;
	else
	{
		chuyenthap(n-1,A,C,B);
		chuyenthap(1,A,B,C);
		chuyenthap(n-1,B,A,C);
	}
}
int main() {
	int n=3;
	chuyenthap(n,'A','B','C');
	return 0;
}