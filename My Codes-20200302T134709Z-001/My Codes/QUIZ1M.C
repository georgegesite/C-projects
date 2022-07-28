#include<stdio.h>
main(){

long num,largest=0,count=0,sum=0,rev=0,rem,i,f1=0,f2=1;
clrscr();

printf("Input 0 to terminate\n\n");

for(;;)
{
   printf("Input: ");
   scanf("%ld",&num);

   if(num==0)
   {
      break;
   }
   if(num>largest)
   {
      largest=num;
   }
   sum=sum+num;
   count++;
}

printf("\nLargest: %ld\n\n",largest);

if(largest%2==0)
{
   /*If even, display the reverse of the total sum of all inputs*/

   printf("Sum: %ld\n",sum);

   for(;sum!=0;)
   {
      rem=sum%10;
      sum=sum/10;
      rev=rev*10+rem;
   }
   printf("Reverse: %ld",rev);
}
else
{
   /*If odd, display the fibonacci series depending on the number of inputs*/

   printf("Number of Inputs: %ld\nFibonacci: ",count);

   for(i=1;i<=count;i++)
   {
      printf("%d ",f1);

      sum=f1+f2;
      f1=f2;
      f2=sum;
   }
}
getch();
}