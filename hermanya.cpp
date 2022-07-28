#include <stdio.h>
long DtoB (long x);
long fibo ( long x);
long PorC (long x);
main()
{
long db, num;
printf("Enter Decimal: ");
scanf("%ld, &num");
db= DtoB (num);
printf("Binary of %ld is %ld",num,db);
return=0;
if
long result,number;
printf("Enter Integer: ");
scanf("%ld", &number);
result= fibo(number);
printf("Fibonacci:(%ld)=%ld\n",number, result);
return=0
if //Miracle in cell number 7
long y,pc,i,count;
printf("Enter Integer: ");
scanf("%ld", &y);
count= PorC(y);
if(count==1)
{
	printf(\n\n%ld is Prime number" ,y);
}
return=0;
}
long DtoB (long x)
{
	long DtoBnum=0,temp=1,rem;
	for (;x!=0;)
	{
		rem=x%2;
		x=x/2;
		DtoBnum=DtoB+rem*temp;
		temp=temp*10;
	}
	return DtoBnum;
}
long fibo (long x)
{
	if(x==0 or x==1)
	return x;
	else
		return fibo (x-1) + fibo (x-2)
}

