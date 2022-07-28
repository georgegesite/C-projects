#include<cstring>
#include<iostream>
#include<cstdlib>

using namespace std;

int main (int argc, char * argv[])
{
	int i,j,l,x,z,n,num[100],sum,y,rem,nn[100];
	char str[100],arr[100][100];
	
	cout<<"Input:";
	gets(str);
	l=strlen(str);
	x=0;
	z=0;
	
	for(i=0;i<=l;i++)
	{
		if(str[i]!='\0'&&str[i]!=' ')
		{
			arr[x][z]=str[i];
			z++;
		}
		else
		{
			x++;
			z=0;
		}
	}
	
	cout<<"Output:";
	for(i=0;i<x;i++)
	{
		n=atoi(arr[i]);
		y=1;
		sum=0;
		for(;n!=0;)
		{
			rem=n%2;
			n=n/2;
			rem=rem*y;
			sum=sum+rem;
			y=y*10;
		}
		cout<<sum<<' ';
	}
	
	cout<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
