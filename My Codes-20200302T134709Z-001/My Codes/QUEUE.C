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

void Queue(){
	long queue;
	
	printf("Input: ");
	scanf("%ld",&queue);
	
	list[size]=queue;
	size++;
	
	printf("Success!\n");
	getch();
}

void Dequeue(){
	
	if(size==0)
	{
		printf("\nThe List is Empty!");
	}
	else
	{
		for(i=0;i<size-1;i++)
		{
			list[i]=list[i+1];
		}
		list[size-1]=0;
		size--;
		
		printf("Success!\n");
	}
	
	getch();
}

main(){

int choice;

clrscr();

printf("QUEUE");	

for( ; ; )
{
	Display();
	
	printf("\n\n1 - Queue    2 - Dequeue    0 - Exit");
	printf("\nChoice: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		Queue();
	}
	else if(choice==2)
	{
		Dequeue();
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