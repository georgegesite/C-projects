#include <iostream>
#include <cstring>
#include "happy.h"
using namespace std;


void happy::input(){
	cout<<"Enter number: ";
	cin>>n;
	execute();
}

void happy::execute()
{
	m=n;
	while(m>=10)
	{
		while(m!=0)
		{
			int b=m%10;
			sum+=(b*b);
			m=m/10;
		}
		m=sum;
		sum=0;
	}
	if (m==1)
	{
		cout<<"Happy number";
	}
	else
	{
		cout<<"Not a happy number";
	}
}
