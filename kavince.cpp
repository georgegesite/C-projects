
#include <stdio.h>
main()
{
 long a,i,f1=0,f2=1,f3=2,sum=0,totalsum=0,rem,rev=0;   
 printf("Input: ");
 scanf("%ld", &a);
 if (a%2==0){
     {
     printf("even\n");   
    }
     for(i=1;i<=a;i++)
     {
     printf(" %ld", f1);
     totalsum=totalsum+f1;
     sum=f1+f2;
     f1=f2;
     f2=sum;
     }
 printf(" = %ld", totalsum);
 }
 if (a%2!=0)
 {
     {
     printf("Odd\n");
     }
     for(i=1;i<=a;i++)
     {
     printf(" %ld", f1);
     totalsum=totalsum+f1;
     sum=f1+f2+f3;
     f1=f2;
     f2=f3;
     f3=sum;
     }
     printf(" =%ld", totalsum);           
     }
 for(;a!=0;)
 {
 rem=a%10;
 a=a/10;
 rev=rev*10+rem;
 }
 printf("\nReverse: %ld", rev);
}

