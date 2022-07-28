#include<stdio.h>
main(){

float inp[100];
int size=0,i;
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

printf("\nIntegers: ");

for(i=0;i<size;i++)
{
    if(inp[i]-(int)inp[i]==0)
    {
	printf("%d ",(int)inp[i]);
    }
}

printf("\nFloats: ");

for(i=0;i<size;i++)
{
    if(inp[i]-(int)inp[i]!=0)
    {
	printf("%.2f ",inp[i]);
    }
}


getch();
}