#include <iostream>
using namespace std;
int a,b;
void DA(int a,int b);
int main()
{
	cin>>a;
	cin>>b;
	DA(a,b);	
}
void DA(int a,int b)
{
	cout<<"q= "<<a/b<<endl<<"r= "<<a%b;
}
