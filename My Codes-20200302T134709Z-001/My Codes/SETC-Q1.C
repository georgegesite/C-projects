#include<stdio.h>
main(){

long num,largest=0,smallest=9,difference,f1=0,f2=1,f3,i;

clrscr();

printf("Input: ");
scanf("%ld",&num);

while(num!=0)
{
    if(num%10>largest)largest=num%10;
    if(num%10<smallest)smallest=num%10;
    num=num/10;
}
printf("\nLargest: %ld",largest);
printf("\nSmallest: %ld",smallest);

difference=largest-smallest;

printf("\nDifference: %ld",difference);

if(difference%2==0)
{
    printf("\nFibonacci: ");

    for(i=1;i<=difference;i++)
    {
	printf("%ld ",f1);
	f3=f1+f2;
	f1=f2;
	f2=f3;
    }
}
else
{
    printf("\n\nCONGRATULATIONS!!!");
}

getch();
}