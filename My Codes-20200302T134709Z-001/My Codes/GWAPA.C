#include<stdio.h>
void fibo(long num);
long oddEven(long num);
main()
{
long n;
clrscr();
printf("input: ");
scanf("%ld",&n);
fibo(n);
getch();
}
void fibo(long num)
{
long i,f3,f1=0,f2=1,OE=0;
for(i=0;i<num;i++)
{
printf("\n%ld",f1);
OE=oddEven(f1);
if (OE==1)
printf(" - Passar sa calculus");
else
printf(" - Basin..guro..unta");
f3=f1+f2;
f1=f2;
f2=f3;
}
}
long oddEven(long num)
{
if (num%2==0)
return 1;
else
return 0;
}