#include<stdio.h>
main()
{
	int num,i;
	printf("Input: ");
	scanf("%d", &num);
	printf("Output: ");
	if(num%2==0)
	{
		for(i=2;i<=num;i=i+2)
		{
		printf("%d ",i);
		}
	}
	else
	{
		for(i=1;i<=num;i=i+2)
		{
		printf("%d ", i);
		}
	}
}
