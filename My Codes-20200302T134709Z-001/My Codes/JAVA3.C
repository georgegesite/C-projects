#include<stdio.h>
main(){

long num[1000],size;
int i;
	
clrscr();

printf("Input Size: ");
scanf("%ld",&size);

printf("Inputs: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}

printf("\nEven: ");

for(i=0;i<size;i++)
{
	if(num[i]%2==0)
	{
		printf("%ld ",num[i]);
	}
}	

printf("\nOdd: ");

for(i=0;i<size;i++)
{
	if(num[i]%2==1)
	{
		printf("%ld ",num[i]);
	}
}
	
getch();	
}
