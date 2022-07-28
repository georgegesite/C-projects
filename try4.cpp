#include<stdio.h>
main()
{
    long num,fib[100],i,j,count=0,large=0;
    long num1=0,num2=1,sum;
    long long rfib[100],f3,f1=0,f2=1;
    printf("Input: ");
    scanf("%ld",&num);
    printf("Fibonacci of %ld: ", num);
    for(i=0;i<num;i++)
    {
        fib[i]=num1;
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
    for(i=0;i<num;i++)
    {
        printf("%ld ",fib[i]);
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
    printf("\nReverse Fibonacci of %ld: ", large);
    for(i=0;i<large;i++)
    {
        rfib[i]=f1;
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    for(i=large-1;i>=0;i--)
    {
        printf(" %lld",rfib[i]);
    }
}
