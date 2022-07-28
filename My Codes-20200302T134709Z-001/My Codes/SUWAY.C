#include <stdio.h>
main ()
{

int long num,rem,b,x=0;
clrscr();
printf("enter a number:");

for ( ; ; )
{

	scanf("%ld", &num);

	if (num==0)
	{
		break;
	}
	if (num!=0)
	{
		rem=num%10;
		num=num/10;
		x=(x*10) + rem;
	}


	while (x!=0)
	{
		rem=x%10;
		x=x/10;

		b=0;

		if (rem!=0);
		{
			b=(b*10) + rem;
			printf("%ld", b);
		}

}
}
getch();
}
