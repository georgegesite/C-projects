#include <stdio.h>
main()
{
	long num,composite[100],count,prime[100],c=0,p=0,i;
	printf("Enter Numbers: ");
	for (;;)
	{
		scanf ("%ld", &num);
		if (num==0)
		break;
		for (i=1;i<=num;i++)
		{
			if (num%i==0)
			count++;
		}
		if (count>2)
		{
			composite[c]=num;
			c++;
		}
		else
		{
			prime[p]=num;
			p++;
		}
		count=0;
	}
	printf ("\n\nComposite Numbers are: ");
	for (i=0;i<c;i++)
	{
		printf (" %ld", composite[i]);
	}
	printf ("\n\nPrime Numbers are: ");
	for (i=0;i<p;i++)
	{
		printf (" %ld", prime[i]);
	}
}
