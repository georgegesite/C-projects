#include<stdio.h>
main(){

float inp,temp2;
int temp1,temp1a;
int num1=0,num2=0;

clrscr();

printf("Enter a Float: ");
scanf("%f",&inp);

temp1 = (int)inp;
temp2 = inp-(int)inp;

printf("Whole: %d",temp1);
printf("\nDecimal: %f\n\n",temp2);

temp1a=temp1;

for(;temp1a!=0;)
{
    temp1a = temp1a/10;
    num1++;
}

for(;(temp2-(int)temp2)!=0;)
{
    temp2 = temp2 * 10;
    printf("%f ",temp2);
}

printf("\n\n%d   %f",num1,temp2);

getch();
}