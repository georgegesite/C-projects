#include<stdio.h>
long factorial(long);

int main(){
long var;
long x;
clrscr();

scanf("%ld",&x);
var=factorial(x);
printf("Factorial of %ld is %ld\n",x,var);

getch();
}

long factorial(long n)
{
    if(n<=1)
    { return 1; }
    else
    {
	return n*factorial(n-1);
    }
}