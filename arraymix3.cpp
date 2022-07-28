#include <stdio.h>
main ()
{
	long arr[100],temp[100], count=0,count2=0,num,i,j,rem,sum=0;
	long fib[100], f1=0,f2=1,f3;
	long count3=0,large=0;
	printf ("Enter numbers: ");
	for ( ; ; )
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
	for (i=0;i<sum;i++)
	{
		fib[i]=f1;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf ("\nFibonacci of %ld is ", sum);
	for (i=0;i<sum;i++)
	{
		printf ("%ld ", fib[i]);
	}
	for (i=0;i<sum;i++)
	{
		for(j=1;j<fib[i];j++)
		{
			if (fib[i]%j==0)
			count3++;
		}
		if (count3<=1)
		{
			if (fib[i]>large)
			large=fib[i];
		}
		count3=0;
	}
	printf ("\nLargest Prime is %ld ", large);
}
