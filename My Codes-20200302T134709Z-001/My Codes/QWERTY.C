#include<stdio.h>
main(){

long num,smallest=9,largest=0,diff,rem,f1=0,f2=1,f3,i;

clrscr();

printf("Input: ");
scanf("%ld",&num);

for(;num!=0;)
{
    rem=num%10;
    num=num/10;

    if(rem>largest)
    {
	largest=rem;
    }
    if(rem<smallest)
    {
	smallest=rem;
    }
}
printf("\nLargest: %ld",largest);
printf("\nSmallest: %ld",smallest);

diff=largest-smallest;
printf("\nDifference: %ld",diff);

if(diff%2==0)/*print fibo*/
{
    printf("\nFibonacci: ");

    for(i=1;i<=diff;i++)
    {
	printf("%ld ",f1);
	f3=f1+f2;
	f1=f2;
	f2=f3;
    }
}
else
{
    printf("\n\nCONGRATULATIONS!");
}

getch();
}