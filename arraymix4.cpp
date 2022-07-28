#include <stdio.h>
main()
{
	long num, arr[100], temp[100], i,j,count=0,count2=0,sum=0,rem;//sum of center diggits
	long f1=0,f2=1,f3,fib[100],count3=0;//fibonacci
	long prime[100],comp[100],c=0,p=0;//prime or composite of fibbo
	printf ("Inputs: ");
	for( ; ; )
	{
		scanf ("%ld", &num);
		if (num==0)
		break;
		arr[count]=num;
		count++;
	}
	for (i=0;i<count;i++)
	{
		while (arr[i]!=0)
		{
			rem=arr[i]%10;
			arr[i]=arr[i]/10;
			temp[count2]=rem;
			count2++;
		}
		if (count2%2!=0 && count2!=1)
		{
			arr[i]=temp[count2/2];
		}
		else 
		arr[i]=0;
		count2=0;
	}
	for (i=0;i<count;i++)
	{
		sum=sum+arr[i];
	}
	printf ("Sum of the center digits is: %ld", sum);
	//fibo
	for (i=0;i<sum;i++)
	{
		fib[i]=f1;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf ("\nFibonacci of sum %ld: ",sum);
	for (i=0;i<sum;i++)
	{
		printf ("%ld ", fib[i]);
	}
	//poc of fibo
	for (i=0;i<sum;i++)
	{
	for (j=1; j<fib[i]; j++)
	
		{
			if (fib[i]%j==0)
			count3++;
		}
		if(count3<=1)	
		{
			prime[p]=fib[i];
			p++;
		}
		else
		{
			comp[c]=fib[i];
			c++;
		}
		
		count3=0;
	}
	printf ("\nPrime Fibonacci Numbers : ");
	for (i=0;i<p;i++)
	{
		printf ("%ld ", prime[i]);
	}
	printf ("\nComposite Fibonacci Numbers : ");
	for (i=0;i<c;i++)
	{
		printf ("%ld ", comp[i]);
	}	
	
}
