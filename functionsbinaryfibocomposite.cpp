#include <stdio.h>
long db (long x);
long pc (long x);
void fibo (long x);
main()
{
	long num, poc, dtb;
	printf("ENTER NUMBER: ");
	scanf ("%ld", &num);
	poc=pc(num);
	dtb= db(num);
	printf("Binary: %ld", dtb);
	if (poc>2)
	printf ("\nCOMPOSITE");
	else 
	printf ("\nPRIME");
	fibo(num);
}
long db (long x)
{
	long temp=1,rem,dbnum=0;
	for(;x!=0;)
	{
		rem=x%2;
		x=x/2;
		dbnum=dbnum+rem*temp;
		temp=temp*10;
	}
	return dbnum;
}
long pc (long x)
{
	long count=0,i;
	for (i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}
	return count; 
}
void fibo (long x)
{
	long sum,num1=0,num2=1,i;
	printf("\nFibonacci: ");
	for (i=1;i<=x;i++)
	{
		sum=num1+num2;
		num1=num2;
		num2=sum;
		printf (" %ld", num1);
	}
}
