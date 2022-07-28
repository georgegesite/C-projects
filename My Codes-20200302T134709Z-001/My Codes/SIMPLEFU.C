#include<stdio.h>
main(){

long num1,num2,total1,total2;
long sum(long x,long y),diff(long x, long y);
clrscr();

printf("Input1: ");
scanf("%ld",&num1);
printf("Input2: ");
scanf("%ld",&num2);

total1=sum(num1,num2);
total2=diff(num1,num2);

printf("Sum = %ld",total1);
printf("\nDiff = %ld",total2);

getch();
}

long sum(long x,long y)
{
   long sum=x+y;
   return sum;
}

long diff(long x,long y)
{
   long temp,diff;

    if(y>x)
    {
	temp=x;
	x=y;
	y=temp;
    }

   diff=x-y;
   return diff;
}