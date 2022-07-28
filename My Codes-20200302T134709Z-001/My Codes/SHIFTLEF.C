#include<stdio.h>

long num[1000],temp;

void ShiftLeft(int dig,int rot)
{
	int i,j;
	
	for(i=0;i<rot;i++)
	{
		temp=num[0];
		
		for(j=0;j<dig-1;j++)
		{
			num[j]=num[j+1];
		}
		
		num[dig-1]=temp;
	}
}

void ShiftRight(int dig,int rot)
{
	int i,j;
	
	for(i=0;i<rot;i++)
	{
		temp=num[dig-1];
		
		for(j=dig-1;j>0;j--)
		{
			num[j]=num[j-1];
		}
		
		num[0]=temp;
	}
}

main(){
	
long size,shift;
int i,choice;	

clrscr();

printf("Input Size: ");
scanf("%ld",&size);
printf("Input/s: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}

for(;;)
{
	printf("\n1 - Shift Left     2 - Shift Right     0 - Exit");
	printf("\nChoice: ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		break;
	}
	
	printf("Number of Shifts: ");
	scanf("%ld",&shift);

	if(choice==1)
	{
		ShiftLeft(size,shift);
	}
	else if(choice==2)
	{
		ShiftRight(size,shift);
	}
	else
	{
		printf("Not in the Choices!");
	}

	printf("Output: ");

	for(i=0;i<size;i++)
	{
		printf("%ld ",num[i]);
	}
	printf("\n\n");
}
getch();
}