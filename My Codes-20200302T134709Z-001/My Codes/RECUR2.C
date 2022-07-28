#include<stdio.h>

int hcf(int n1,int n2);

main()
{
int n1,n2;
clrscr();

printf("Enter two Numbers: ");
scanf("%d %d",&n1,&n2);

printf("GCF of %d and %d is %d.",n1,n2,hcf(n1,n2));

getch();
}

int hcf(int n1,int n2)
{
    if(n2!=0)
    {
	return hcf(n2,n1%n2);
    }
    else
    {
	return n1;
    }
}