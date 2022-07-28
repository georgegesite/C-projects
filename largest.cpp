#include <stdio.h>
main()
{
	int a,rem,sum,largest=0;
	printf("Input: ");
	for(;;)
	{
		scanf("%d",&a);
		if (a==0)
			{
			break;
			}
		if(a>largest)
			{
			largest=a;
			}
		for(;largest!=0;)
			{
			rem=largest%10;
			largest=largest/10;
			sum=sum+rem;
			}
	}
		printf("Sum= %d",sum);
}
