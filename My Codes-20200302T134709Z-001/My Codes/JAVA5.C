#include<stdio.h>
main(){
	
long num[1000],largest,size;
int i;	
	
clrscr();
	
printf("Input Size: ");
scanf	("%ld",&size);

printf("Inputs: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}	

largest=num[0];

for(i=0;i<size;i++)
{
	if(num[i]>largest)
	{
		largest=num[i];
	}
}

for(i=0;i<size;i++)
{
	if(largest==num[i])
	{
		num[i]=0;
	}
}

largest=num[0];

for(i=0;i<size;i++)
{
	if(num[i]>largest)
	{
		largest=num[i];
	}
}

printf("\nSecond Largest is %ld",largest);

getch();	
}
