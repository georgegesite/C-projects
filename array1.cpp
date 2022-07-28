#include <stdio.h>
main()
{
	long num[10], sum=0,i;
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf ("%ld", &num[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+num[i];
	}
	printf ("%ld", sum);
}
