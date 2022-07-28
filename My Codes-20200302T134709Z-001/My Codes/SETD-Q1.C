#include<stdio.h>
main(){

long num,totalSum=0,sumDigit=0,f1=0,f2=1,f3,i;

clrscr();
printf("Inputs: ");

for(;;)
{
    scanf("%ld",&num);
    if(num==0)break;

    totalSum=totalSum+num;

    while(num!=0)
    {
	sumDigit=sumDigit+(num%10);
	num=num/10;
    }
}

printf("\nTotal Sum: %ld",totalSum);
printf("\nTotal Sum of Digits: %ld",sumDigit);

if(sumDigit%2==0)
{
    printf("\nFibonacci: ");

    for(i=1;i<=sumDigit;i++)
    {
	printf("%ld ",f1);
	f3=f1+f2;
	f1=f2;
	f2=f3;
    }
}
else printf("\n\nCONGRATULATIONS!!!");

getch();
}