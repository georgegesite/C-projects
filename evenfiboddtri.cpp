#include <stdio.h>
main()
{
	int a,i,num1=0,num2=1,num3=2;
	int sum, totalsum=0;
	printf("Input: ");
	scanf("%d", &a);
	printf("Output: ");
	if(a%2==0)
	{
		for(i=1;i<=a;i++)
		{
			printf(" %d", num1);
		totalsum=totalsum+num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
		
		}
	printf(" = %d", totalsum);	
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			printf(" %d", num1);
			totalsum=totalsum+num1;
			sum=num1+num2+num3;
			num1=num2;
			num2=num3;
			num3=sum;
			
		}
	printf(" = %d", totalsum);	
	}
	
}
