#include<stdio.h>
main(){

long num,sum;
clrscr();

printf("Input: ");
scanf("%ld",&num);

do
{
    sum=0;
    while(num!=0)
    {
       sum=sum+(num%10);
       num=num/10;
    }
    num=sum;
}while(sum>=10);

printf("Simplified Sum: %ld",sum);

getch();
}