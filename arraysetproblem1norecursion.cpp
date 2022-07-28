#include <stdio.h>
main()
{
	long fib[100], revfib[100], sum, num1=0,num2=1,i,j,num,large=0,count=0;
	long f1=0,f2=1,f3;
	printf("Input: ");
	scanf ("%ld", &num);
	for (i=0;i<num;i++)
	{
		fib[i]=num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	printf ("Fibonacci: ");
	for (i=0;i<num;i++)
	{
		printf ("%ld ", fib[i]);
	}
for(i=0;i<num;i++)
    {
        for(j=1;j<fib[i];j++)
        {
            if(fib[i]%j==0)
            {
                count++;
            }
        }
        if(count<=1)
       {
            if(fib[i]>large)
            {
                large=fib[i];
            }
        }
    count=0;  
    }
    printf("\nLargest Prime: %ld", large);
	for (i=0;i<large;i++)
	{
		revfib[i]=f1;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf (" \nRev Fibonacci: ");
	for (i=large-1;i>=0;i--)
	{
		printf ("%ld ", revfib[i]);
	}
	
}
