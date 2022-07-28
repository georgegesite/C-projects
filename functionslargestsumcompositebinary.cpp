#include <stdio.h>
long largest (long x);
long fibo (long x);
long sum (long x);
long poc (long x);
long dtb (long x);
main()
{
	long max,num,totalsum,pc,db,fib;
	printf("Enter Number: ");
	scanf ("%ld", &num);
	max=largest(num);
	printf("Largest Digit: %ld", max);
	fibo(max);
	totalsum=sum(num);
	printf("\nSum of Digits: %ld", totalsum);
	pc=poc(totalsum);
	if(pc>2)
	printf("\nCOMPOSITE");
	else
	printf("\nPRIME");
	db=dtb(totalsum);
	printf ("\nBinary of the sum is %ld", db);
}
long largest (long x)
{
	long large=0, rem;
	for (;x!=0;)
	{
	rem=x%10;
	x=x/10;
	if (rem>large)
		{
		large=rem;
		}
	}
	return large;
}
long fibo (long x)
{
	long sum,i,num1=0,num2=1;
	printf("\nFibonacci of the Largest: ");
	for(i=1;i<=x;i++)
	{
		sum=num1+num2;
		num1=num2;
		num2=sum;
		printf(" %ld", num1);
	}
	return 0;
}
long sum (long x)
{
	long totalsum=0,rem;
	for (;x!=0;)
	{
	rem=x%10;
	x=x/10;
	totalsum=totalsum+rem;
	}
	return totalsum; 
}
long poc ( long x)
{
	long count=0,i;
	for( i=1;i<=x;i++)
	{
		if (x%i==0)
		count++;
	}
	return count; 
}
long dtb (long x)
{
	long dbnum=0,temp=1,rem;
	for(;x!=0;)
	{
		rem=x%2;
		x=x/2;
		dbnum=dbnum+rem*temp;
		temp=temp*10;
	}
	return dbnum;
}
