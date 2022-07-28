#include<stdio.h>
int main()
{
	int num1=0,num2=1,sum;
	int a, i;
	printf("Input: ");
	scanf("%d", &a);
	printf("Output: ");
	for(i=1;i<=a;i++)
	{
		printf("%d " , num1);
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
}
