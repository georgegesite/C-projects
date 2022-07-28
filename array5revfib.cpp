#include <stdio.h>
main()
{
	long num,num1=0,num2=1,sum,fib[100],i,j;
	printf ("Enter fib: ");
	scanf ("%ld", &num);
	for (i=0;i<num;i++)
	{
		fib[i]=num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	printf ("Reverse Fibonacci: ");
	for (j=i-1; j>=0;j--)
	{
		printf (" %ld", fib[j]);
	}
}
