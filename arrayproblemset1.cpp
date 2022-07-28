#include<stdio.h>
long fibo (long x);
main()
{
    long long num, i,j,fib[100], revfib[100],count=0, max=0,sum,num1=0,num2=1;
    printf("Input: ");
    scanf("%ld", &num);
    printf("Fibonacci of %ld: ", num);
    for(i=0;i<num;i++)
	{
        fib[i]=fibo(i);
        printf("%ld ", fib[i]);
    }
    for(i=0;i<num;i++)
	{
        for(j=1;j<fib[i];j++)
			{
            if(fib[i]%j==0) 
			count++;
            }
        if(count<=1)
		{
            if(fib[i]>max) 
			max=fib[i];
        } 
		count=0;
    }
    printf("\nLargest prime: %ld", max);
    for (i=0;i<max;i++)
	{
		revfib[i]=num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	printf ("\nReverse Fibonacci of %ld:  ", max);
	for (i=max-1;i>=0;i--)
	{
		printf ("%lld ", revfib[i]);	
	}
}
long fibo(long x)
{
    if(x==0||x==1) 
	return x;
    else 
	return (fibo(x-1)+fibo(x-2));
}
