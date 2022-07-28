#include <stdio.h>
long dtb (long x);
long rev (long x);
long poc (long x);
main()
{
	long num,rv,db,pc;
	scanf("%ld", &num);
	db=dtb(num);
	rv=rev(db);
	pc=poc(num);
	if(pc==1)
	printf("The number is a composite number");
	if (db==rv)
	{
		printf ("The number is a palindromic ");
		if (pc==0)
		printf ("prime");
	}
	if (db!=rv)
	{
		printf ("The number is not a palindromic prime");	
	}
}
long dtb (long x)
{
	long dtbnum=0,temp=1,i,rem;
	while (x!=0)
	{
		rem=x%2;
		x=x/2;
		dtbnum=dtbnum+rem*temp;
		temp=temp*10;
	}
	return dtbnum;
}
long rev (long x)
{
	long rev=0,rem,i;
	while (x!=0)
	{
		rem=x%10;
		x=x/10;
		rev=rev*10+rem;
	}
	return rev;
}
long poc (long x)
{
	long count=0,i;
	for(i=1;i<=x;i++)
	{
		if (x%i==0)
		count++;
	}
	if (count>2)
	return 1;
	else
	return 0;
}
