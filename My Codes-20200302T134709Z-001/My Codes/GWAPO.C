#include<stdio.h>
float addition(float x,float y);
float subtraction(float x,float y);
float multiplication(float x,float y);
float division(float x,float y);
int pOc(int x);

main(){

int choice;
float x,y,z;

clrscr();

printf("Choice: ");
scanf("%d",&choice);
printf("Input1: ");
scanf("%f",&x);
printf("Input2: ");
scanf("%f",&y);

if(choice==1)
{
    z=addition(x,y);
    printf("%f",z);
}
else if(choice==2)
{
    z=subtraction(x,y);
}
else if(choice==3)
{
    z=multiplication(x,y);
}
else if(choice==4)
{
    z=division(x,y);
}
else if(choice==5)
{
    z=pOc(x);

    if(z==0)printf("\n%d is Composite",(int)x);
    else if(z==1)printf("\n%d is Prime",(int)x);
}


getch();
}

float addition(float x,float y)
{
    return x+y;
}
float subtraction(float x,float y)
{
    return x-y;
}
float multiplication(float x,float y)
{
    return x*y;
}
float division(float x,float y)
{
    return x/y;
}

int pOc(int x)
{
    int i,count=0;

    for(i=1;i<=x;i++)
    {
	if(x%i==0) count++;
    }
    if(count>2)return 0;
    else return 1;
}