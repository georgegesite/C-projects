#include <stdio.h>
main()
{
	long num,rem;
	long rev=0,sum=0,small=9,lar=0;
	printf("Input: ");
	scanf("%ld", &num);
	for (;num!=0;)
	{
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	sum=sum+rem;
	if(rem>lar)
		{
		lar=rem;	
		}
	if(rem<small)
		{
		small=rem;	
		}		
	}
	printf("\nReverse: %ld", rev);
	printf("\nSum: %ld", sum);
	printf("\nSmallest: %ld", small);
	printf("\nLargest: %ld", lar);
}
