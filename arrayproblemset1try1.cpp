#include<stdio.h>
long fibonacci(long x)
{
    if(x==0||x==1) 
	return x;
    else 
	return (fibonacci(x-1)+fibonacci(x-2));
}
main()
{
    long long put, i,fib[100], revfib[100],count=0, lrg=0,x,sum,num1=0,num2=1;
    printf("Input: ");
    scanf("%ld", &put);
    printf("Fibonacci of %ld: ", put);
    for(i=0;i<put;i++)
	{
        fib[i]=fibonacci(i);
        printf("%ld ", fib[i]);
    }
    for(i=0;i<put;i++)
	{
        for(x=1;x<fib[i];x++)
			{
            if(fib[i]%x==0) 
			count++;
            }
        if(count<=1)
		{
            if(fib[i]>lrg) 
			lrg=fib[i];
        } 
		count=0;
    }
    printf("\nLargest prime: %ld\nReverse Fibonacci of %ld: ", lrg, lrg);
    for (i=0;i<lrg;i++)
	{
		revfib[i]=num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}

	for (i=lrg-1;i>=0;i--)
	{
		printf ("%lld ", revfib[i]);	
	}
}
