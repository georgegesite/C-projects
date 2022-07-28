#include <stdio.h>
main()
{
	float arr[100];
	long i,j,num,temp=0,rem;
	printf ("Enter Number to find the median: ");
	scanf ("%ld", &num);
	for (i=0;num!=0;i++)
	{
		rem=num%10;
		num=num/10;
		arr[i]=rem;
		temp++;
	}
		if (temp%2==0)
		{
			printf ("\n%.1f", (arr[temp/2] + arr[(temp/2)-1])/2);
		}
		else
		{
			printf ("\n%.2f", arr[temp/2]);
		}
	

}
