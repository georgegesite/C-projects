#include <stdio.h>
main()
{
	long num, rev=0,rem;
	printf("Input: ");
	scanf("%ld", &num);
	for (;num!=0;)
	{
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	}
	printf("Output: %ld", rev);
}
