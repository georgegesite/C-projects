#include <stdio.h>
long dtb (long x);
long sum (long x);
long evenodd (long x);
long fibo (long x);
long poc (long x);
main()
{
	long num, db, totalsum, eo, fib,pc;
	printf("Enter Number: ");
	scanf ("%ld", &num);
	db=dtb(num);
	printf ("\nThe Binary of %ld is %ld", num, db);
	totalsum =sum(db);
	printf ("\nThe Sum of the Binary is %ld", totalsum);
	eo=evenodd (totalsum);
	if (eo==1)//even sya
	{
		pc=poc(totalsum);
		if (pc==1)
		printf ("\n%ld is a Composite Number", totalsum);
		if (pc==0)
		printf ("\n%ld is a Prime Number", totalsum);
		fib=fibo(totalsum);
	}
	if (eo==0)//odd 
	{
		pc=poc(totalsum);
		if (pc==1)
		printf ("\n%ld is a Composite Number", totalsum);
		if (pc==0)
		printf ("\n%ld is a Prime Number", totalsum);
		fib=fibo(totalsum);
		printf ("\n\nCongratulations");
	}
}
long dtb (long x)
{
	long dtbnum=0, temp=1, rem;
	while (x!=0)
	{
		rem=x%2;
		x=x/2;
		dtbnum=dtbnum+rem*temp;
		temp=temp*10;
	}
	return dtbnum;
}
long sum (long x)
{
	long rem,totalsum=0;
	while (x!=0)
	{
		rem=x%10;
		x=x/10;
		totalsum=totalsum+rem;
	}
	return totalsum; 
}
long evenodd (long x)
{
	if (x%2==0)
	return 1;
	else 
	return 0;
}
long fibo (long x)
{
	long sum,num1=0,num2=1,i;
	printf("\nFibonacci is: ");
	for(i=1;i<=x;i++)
	{
		printf(" %ld",num1);
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	return 0;
}
long poc (long x)
{
	long count=0,i;
	for (i=1;i<=x;i++)
	{
		if (x%i==0)
		count++;
	}
	if (count>2)
	return 1;
	else
	return 0;	
}

