#include<stdio.h>
float addition(float x,float y);
float subtraction(float x,float y);
float multiplication(float x,float y);
float division(float x,float y);

main(){
int choice;
float num1,num2,ans;

clrscr();

printf("Choice: ");
scanf("%d",&choice);
scanf("%f%f",&num1,&num2);

if(choice==1)
{
     ans=addition(num1,num2);
}
else if(choice==2)
{
    ans=subtraction(num1,num2);
}
else if(choice==3)
{
    ans=multiplication(num1,num2);
}
else if(choice==4)
{
    ans=division(num1,num2);
}

printf("\nAnswer: %f",ans);

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
}