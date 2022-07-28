#include<stdio.h>
long comprime(long x);
main()
{
	long put;
	
	printf("Input numbers: ");
	scanf("%d", &put);
	comprime(put);
	}
long comprime(long x)
{
	long rem, i, count=0, max1=0, max2=0;
	for(;x!=0;)
	{
	rem=x%10;
	x=x/10;
	count=0;
	for(i=1;i<rem;i++)
	{
		if(rem%i==0)
		count++;
		} 
		
	if(count<=1)
	{
		printf("\Prime: %d", rem);
		if(rem>max2)
		max2=rem;
	} 
	else
	{
	printf("\Composite: %d", rem);
	if(rem>max1)
	max1=rem;
	} 

	} 
		printf("\Largest prime number: %d", max2);
	printf("\Largest composite number: %d", max1);
	
	if(max1>max2)
	printf("\Largest number is COMPOSITE %d", max1);
	else
	printf("\Largest number is PRIME %d", max2);
	
	return 0;
	}	

