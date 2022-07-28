#include<stdio.h>
main(){

long num,largest=0,sum=0,i,f1=0,f2=1,f3;
printf("Input/s: ");

for(;;)
{
   scanf("%ld",&num);
   if(num==0) 
   break;
   
  
   if(num>largest)
   largest=num;
   
}

printf("\nLargest: %ld",largest);

for(;largest!=0;)
{
   sum=sum+(largest%10);
   largest=largest/10;
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
   printf("\n\nCONGRATULATIONS!!!");
}

}
