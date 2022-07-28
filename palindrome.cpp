#include <stdio.h>
main()
{
	long num,rem,rev=0,x;
	printf("Enter number to check if it is a palindrome or not: ");
	scanf("%ld", &num);
	
	x=num;
	
	while(x!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+x;
	}
	if(x==rev)
	printf("%ld is a palindrome number\n", x);
	else
	printf("%ld is not a palindrome number\n", x);
	
}
