#include<stdio.h>
long list[10000],size=0,i,num,pos,j,temp,rot;

void Display(){
	if(size==0)
	{
		printf("\nThe List is Empty");
		getch();
	}
	else
	{
		printf("\n\nList:\n\n");
		for(i=0;i<size;i++)
		{
			printf("%ld) %ld  \n",i+1,list[i]);
		}
		getch();
	}
}

void Insert(){
	printf("Enter Value to be Inserted: ");
	scanf("%ld",&num);
	printf("Enter Position where to Insert: ");
	scanf("%ld",&pos);
	
	if(pos-1>size)
	{
		printf("\n\nCannot insert to Position %ld because Size is %ld",pos,size);
		getch();
	}
	else
	{
		for(i=size+1;i>=pos;i--)
		{
			list[i]=list[i-1];
		}
		
		list[pos-1]=num;
		size++;
		printf("\n\nSuccess");
		getch();
	}
}

void Delete(){
	printf("Enter the Position of the Value to be Deleted: ");
	scanf("%ld",&pos);
	
	if(pos>size)
	{
		printf("\nThere is no value at Position %ld",pos);
		getch();
	}
	else
	{
		for(i=pos-1;i<size;i++)
		{
			list[i]=list[i+1];
		}
		size--;
		printf("\n\nSuccess");
		getch();
	}
}

void Update(){
	printf("Enter the Position to be Updated: ");
	scanf("%ld",&pos);
	printf("Enter the Value: ");
	scanf("%ld",&num);
	
	if(pos>size)
	{
		printf("\nThere is no value at Postion %ld",pos);
		getch();
	}
	else
	{
		list[pos-1]=num;
		printf("\nUpdate Success!");
		getch();
	}
}

void SortAscending(){
	if(size==0)
	{
		printf("\nThere is Nothing to Sort");
		getch();
	}
	else
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				if(list[i]<list[j])
				{
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
		printf("\nSorting Success!");
		getch();
	}
}

void SortDescending(){
	if(size==0)
	{
		printf("\nThere is Nothing to Sort");
		getch();
	}
	else
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				if(list[i]>list[j])
				{
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
		}
		printf("\nSorting Success!");
		getch();
	}
}

void ShiftDown(){
	if(size==0)
	{
		printf("The List is Empty!");
		getch();
	}
	else
	{
		printf("\nNumber of Shifts: ");
		scanf("%ld",&rot);
		
		for(i=0;i<rot;i++)
		{
			temp=list[size-1];
			for(j=size-1;j>0;j--)
			{
				list[j]=list[j-1];
			}
			list[0]=temp;
		}
		
		printf("Success! List Shifted Down %ld time/s",rot);
		getch();
	}
}

void ShiftUp(){
	if(size==0)
	{
		printf("The List is Empty!");
		getch();
	}
	else
	{
		printf("\nNumber of Shifts: ");
		scanf("%ld",&rot);
		
		for(i=0;i<rot;i++)
		{
			temp=list[0];
			for(j=0;j<size-1;j++)
			{
				list[j]=list[j+1];
			}
			list[size-1]=temp;
		}
		
		printf("Success! List Shifted Up %ld time/s",rot);
		getch();
	}
}

main(){

char choice;

for(;;)
{
clrscr();

printf("List\n");
printf("A - Display        F - Sort Ascending");
printf("\nB - Insert         G - Sort Descending");
printf("\nC - Delete         H - Shift Down");
printf("\nD - Update         I - Shift Up");
printf("\n\nE - Exit");
printf("\n\nChoice: ");
scanf("%c",&choice);

if(choice=='A' || choice=='a')
{
	Display();
	continue;
}
else if(choice=='B' || choice=='b')
{
	Insert();
	continue;
}
else if(choice=='C' || choice=='c')
{
	Delete();
	continue;
}
else if(choice=='D' || choice=='d')
{
	Update();
	continue;
}
else if(choice=='F' || choice=='f')
{
	SortAscending();
	continue;
}
else if(choice=='G' || choice=='g')
{
	SortDescending();
	continue;
}
else if(choice=='H' || choice=='h')
{
	ShiftDown();
	continue;
}
else if(choice=='I' || choice=='i')
{
	ShiftUp();
	continue;
}
else if(choice=='E' || choice=='e')
{
	break;
}
else
{
	printf("\n\nNot in the Choices");
}

}
}