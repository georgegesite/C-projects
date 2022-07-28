#include <stdio.h>
main()
{
	long size, arr[100],prime[100],p=0,comp[100],c=0,i,j,count=0;
	printf ("Size: ");
	scanf ("%ld", &size);
	printf ("Inputs: ");
	for (i=0;i<size;i++)
	{
		scanf ("%ld", &arr[i]);
		for (j=1; j<arr[i]; j++)
		{
			if (arr[i]%j==0)
			count++;
		}
		if (count>1)
		{
			comp[c]=arr[i];
			c++;
		}
		else
		{
			prime[p]=arr[i];
			p++;
		}
		count=0;
	}
	printf ("\n\n%ld Prime Numbers : ", p);
	for (i=0;i<p;i++)
	{
		printf ("%ld ", prime[i]);
	}
	printf ("\n%ld Composite Numbers : ", c);
	for (i=c-1;i>=0;i--)
	{
		printf ("%ld ", comp[i]);
	}	
}
