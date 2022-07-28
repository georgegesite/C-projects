#include <stdio.h>

int main ()
{
	int a,b,c;
	printf("Enter 3 Numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	
	if(a > b && a > c)
	{
		printf("%d is Largest", a);
	}
	else if(b > a && b > c)
	{
		printf("%d is Largest", b);
	}
	else if (c>b && c>a)
	{
		printf("%d is Largest", c);
	}
}
