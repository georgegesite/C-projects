#include<stdio.h>

long list[10000],size=0;
int i;

void Display(){

	printf("\nList: ");
	
	if(size==0)
	{
		printf("Empty");
	}
	else
	{
		for(i=0;i<size;i++)
		{
			printf("%ld ",list[i]);
		}
	}
}

void  Push(){
	
	long push;
	
	printf("Input: ");
	scanf("%ld",&push);
	
	list[size]=push;
	size++;
	
	printf("Success!\n");
	getch();
}

void Pop(){
	
	if(size==0)
	{
		printf("\nThe List is Empty!");
	}
	else
	{
		list[size-1]=0;
		size--;
		
		printf("Success!\n");
	}
	getch();
}

main(){

int choice;

clrscr();

printf("STACK");	

for( ; ; )
{
	Display();
	
	printf("\n\n1 - Push    2 - Pop    0 - Exit");
	printf("\nChoice: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		Push();
	}
	else if(choice==2)
	{
		Pop();
	}
	else if(choice==0)
	{
		printf("\n\n\nExiting...");
		break;
	}
}	
	
getch();	
}
