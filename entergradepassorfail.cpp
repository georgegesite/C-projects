#include<stdio.h>
main ( void )
{
unsigned int a;
printf("Enter Grade: ");
scanf("%u", &a);
for(;;)
{
	if (a>=75 && a<=100)
	{
		printf("\nPass");
	}
	else if (a<=74)
	{
		printf("\nFail");
		break;	
	}
	return 0;
}
}
