#include<stdio.h>
main(){

long num,rev=0,num2,diff,sum=0,i,f1=0,f2=1,f3;
clrscr();

printf("Input: ");
scanf("%ld",&num);
num2=num;

while(num!=0)
{
   rev=(rev*10)+(num%10);
   num=num/10;
}
printf("\nReverse: %ld",rev);
diff=num2-rev;

if(diff<0) diff=diff*-1;
printf("\nDifference: %ld",diff);

while(diff!=0)
{
    sum=sum+(diff%10);
    diff=diff/10;
}
printf("\nSum: %ld",sum);

if(sum%2==0)
{
   printf("\nFibonacci: ");
   for(i=1;i<=sum;i++)
   {
       printf("%ld ",f1);
       f3=f1+f2;
       f1=f2;
       f2=f3;
   }
}
else
{
    printf("\nCONGRATULATIONS!!!");
}
getch();
}