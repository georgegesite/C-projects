#include<stdio.h>
main(){

float inp[100],sumFloat=0;
int i,size=0,sumInt=0;

clrscr();

printf("Inputs: ");

for(;;)
{
    scanf("%f",&inp[size]);

    if(inp[size]==0)
    {
	break;
    }
    size++;
}

printf("\nSum of Whole:");

for(i=0;i<size;i++)
{
    sumInt = sumInt + (int)inp[i];
    printf(" %d +",(int)inp[i]);
}
printf("\b = %d",sumInt);
printf("\nSum of Decimal:");

for(i=0;i<size;i++)
{
    sumFloat = sumFloat + (inp[i]-(int)inp[i]);

    if(inp[i]-(int)inp[i]!=0)
    {
	printf(" %.2f +",inp[i]-(int)inp[i]);
    }
}
printf("\b = %.3f",sumFloat);

getch();
}