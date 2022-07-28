#include <iostream>

using namespace std;
	int n,r,answer;
int nCr(int n, int r);
int fact(int n);
int main(){

	cin>>n;
	cin>>r;
		answer=nCr( n, r);
		fact(n);
		cout<<answer;
		return 0;
}

int nCr(int n,int r)
{
	return fact(n)/(fact(n)*fact(n-r));
	
}
int fact(int n)
{
	int res=1;
	for (int i=2;i<=n;i++){
		res=res*i;
	}
	return res;
}
