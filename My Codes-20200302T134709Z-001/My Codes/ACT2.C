p#include<stdio.h>

void fibo(int x);
void oddEven(int x);


main(){

int num;

clrscr();
printf("Input: ");
scanf("%d",&num);
fibo(num);

getch();
}

void fibo(int x)
{
    int i,f1=0,f2=1,f3;

    printf("Fibonacci: \n");

    for(i=1;i<=x;i++)
    {
	printf("%d ",f1);

	oddEven(f1);

	f3=f1+f2;
	f1=f2;
	f2=f3;
    }
}

void oddEven(int x)
{
    if(x%2==0)printf("- Even\n");
    else printf("- Odd\n");
}