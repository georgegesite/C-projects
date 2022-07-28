#include <stdio.h>
main()
{
	long num,even[100],odd[100],e=0,o=0,i;
	printf("Enter Numbers: ");
	for (;;)
	{
		scanf ("%ld", &num);
		if (num==0)
		break;
		if (num%2==0)
		{
			even[e]=num;
			e++;
		}
		else
		{
			odd[o]=num;
			o++;
		}
	}
	printf ("\n\nEven Numbers are: ");
	for (i=0;i<e;i++)
	{
		printf (" %ld", even[i]);
	}
	printf ("\n\nOdd Numbers are: ");
	for (i=0;i<o;i++)
	{
		printf (" %ld", odd[i]);
	}
}
