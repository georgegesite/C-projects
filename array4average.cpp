#include <stdio.h>
main()
{
	float x[100],num,sum=0,ave;
	int size=0,i;
	printf ("Enter Numbers: ");
	for (;;)
	{
		scanf ("%f", &num);
		if (num==0)
		break;
		x[size]=num;
		size++;
	}
	for (i=0;i<size;i++)
	{
		sum=sum+x[i];
	}
	ave=sum/size;
	printf ("Average is: %.2f", ave);
}
