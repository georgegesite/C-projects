#include<stdio.h>
main(){

float inp,temp2;
int temp1;

clrscr();

printf("Enter a Float: ");
scanf("%f",&inp);

temp1 = (int)inp;
temp2 = inp-(int)inp;

printf("Whole: %d",temp1);
printf("\nDecimal: %f",temp2);

getch();
}