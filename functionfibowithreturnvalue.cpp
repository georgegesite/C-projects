#include <stdio.h>
long fibo( long x);
int main()
{
    long i,number;  
    printf("Enter an interger: ");
    scanf("%ld", &number);
    printf("Fibonacci: ");
   for(i=0;i<=number;i++)
   	printf("%ld ", fibo(i));
   return 0;
}

long fibo(long x)
{
   if( x == 0 || x == 1)
       return x;
   else
       return fibo(x - 1) + fibo(x - 2);
}
