#include<stdio.h>
main()
{
	int num1=0,num2=1,num3=2,sum;
	int a, i;
	printf("Input: ");
	scanf("%d", &a);
	printf("Output: ");
	for(i=1;i<=a;i++)
	{
		printf("%d " , num1);
		sum=num1+num2+num3;
		num1=num2;
		num2=num3;
		num3=sum;
	}
}
