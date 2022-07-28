#include <stdio.h>
long largest (long x);
void composite (long x);
main()
{
	long num, max;
	scanf("%ld", &num);
	max=largest(num);
	printf("Largest: %ld", max);
	composite(max);
}
long largest (long x)
{
	long large=0,rem;
		for (;x!=0;)
	{
		rem=x%10;
		x=x%10;
		if (rem>large)
		{
			large=rem;
		}
	}
	return large;
}
void composite (long x)
{
	long i, count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	if(count>2)
	printf("\nCOMPOSITE");
	else
	printf("\nPRIME");
	}
}
