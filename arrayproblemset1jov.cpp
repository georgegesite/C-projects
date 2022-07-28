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
    long put, i,fib[100], count=0, lrg=0,x;
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
    for(i=lrg-1;i>=0;i--)
	{
        printf("%ld ", fibonacci(i));
    }
}
