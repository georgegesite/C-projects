#include <stdio.h>
long fibonacci (long x);
main()
{
	long fibo[100], i ,num;
	printf ("Enter Fibo: ");
	scanf ("%ld", &num);
	printf ("Fibonacci: ");
	for (i=0;i<num;i++)
	{
		fibo[i]=fibonacci(i);
		printf ("%ld ", fibo[i]);
	}	
}
long fibonacci (long x)
{
	long num1=0,num2=1,sum,temp=0,i;
	for (i=0;i<x;i++)
	{
		sum=num1+num2;
		temp=num1;
		num1=num2;
		num2=sum;
	}
	return num1;
}
