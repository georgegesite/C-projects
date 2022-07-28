/*=====================================*/
#include<stdio.h>
int seat[10][6],c=0,iden=11111,check;

struct info{

int id;
int row;
char col;
char lastName[10],firstName[20];

};

struct info customer[60];

void initialize(),display(),reservation(),checkReserve(),displayOrder(),deleteReserve();
void checkArr(char letter,int num);
/*=====================================*/
/*=====================================*/

main(){
char c;
clrscr();
initialize();

for(;;)
{
	clrscr();
	printf("A - Display Seats\nB - Reserve a Seat\nC - Check Seat\nD - Delete Reservation\nE - Exit");
	printf("\nF - Display Reservation Order");
	printf("\nChoice: ");
	scanf("%s",&c);

	if(c=='A' || c=='a')
	{
		display();
	}
	else if(c=='B' || c=='b')
	{
		reservation();
	}
	else if(c=='C' || c=='c')
	{
		checkReserve();
	}
	else if(c=='d' || c=='D')
	{
		deleteReserve();
	}
	else if(c=='F' || c=='f')
	{
		displayOrder();
	}
	else if(c=='E' || c=='e')
	{
		break;
	}
}
}
/*=====================================*/
/*=====================================*/
void initialize()
{
    int i,j;

    for(i=0;i<10;i++)
    {
		for(j=0;j<6;j++)
		{
			seat[i][j]=0;
		}
    }
}
/*=====================================*/
void checkArr(char letter,int num)
{
	check=0;

	if(num<1 || num>10)
	{
		check++;
	}
	if((letter!='A' || letter!='a') &&(letter!='B' || letter!='b') )
	{
		if((letter!='C' || letter!='c') &&(letter!='D' || letter!='d') )
		{
			if((letter!='E' || letter!='e') &&(letter!='F' || letter!='f') )
			{
				check++;
			}
		}
	}
}
/*=====================================*/
void display()
{
    int i,j;
	clrscr();

    printf("\n\t\t\t       SEAT RESERVATIONS\n");
	printf("\t\t\t     ---------------------\n\n");

	printf(" \t\tA\tB\t\tC\tD\t\tE\tF\n");
	printf(" \t\t-\t-\t\t-\t-\t\t-\t-\n\n");

	for(i=0;i<10;i++)
	{
		printf("%8d )",i+1);
		for(j=0;j<6;j++)
		{
			if(j==2){printf("\t");}
			if(j==4){printf("\t");}

			if(seat[i][j]==0)
			{
				printf("\t*");
			}
			if(seat[i][j]==1)
			{
				printf("\tO");
			}
		}

		if(i==2){printf("\n");}
		if(i==6){printf("\n");}
		printf("\n");
	}
	printf("\nSeats Occupied: %d\nVacant Seats: %d",c,60-c);
	getch();
}
/*=====================================*/
void reservation()
{
	char letter,g;
	int num,letter2;

	printf("\n\nColumn Letter(A-F) : ");
	scanf("%s",&letter);
	printf("Row Number(1-10) : ");
	scanf("%d",&num);

	checkArr(letter,num);
	if(check==2)
	{
		printf("Invalid Selection!");
		getch();
		return;
	}
	else
	{
		if(letter== 'A' || letter=='a'){letter2=0;letter='A';}
		else if(letter== 'B' || letter=='b'){letter2=1;letter='B';}
		else if(letter== 'C' || letter=='c'){letter2=2;letter='C';}
		else if(letter== 'D' || letter=='d'){letter2=3;letter='D';}
		else if(letter== 'E' || letter=='e'){letter2=4;letter='E';}
		else if(letter== 'F' || letter=='f'){letter2=5;letter='F';}

		if(seat[num-1][letter2]==1)
		{
			printf("\nSeat is already taken!\n");
			getch();
			return;
		}

		printf("Please Enter Your Name for Reservation ");
		printf("\n\nLast Name: ");
		scanf("%s",&customer[c].lastName);
		printf("First Name: ");
		scanf("%s",&customer[c].firstName);

		customer[c].col=letter;
		customer[c].row=num;
		customer[c].id=iden;


		seat[num-1][letter2]=1;

			printf("\n\nSuccess! Hello %s, you will be in seat %c%d\n",customer[c].firstName,letter,num);


		c++;
		iden++;

		getch();
	}
}
/*=====================================*/
void checkReserve()
{
	char letter;
	int num,letter2,temp,i;

	printf("\n\nCheck Availability of a Seat\nColumn Letter: ");
	scanf("%s",&letter);
	printf("Row Number: ");
	scanf("%d",&num);

	checkArr(letter,num);

	if(check==2)
	{
		printf("Out of Bounds! ");
	}
	else
	{
		if(letter== 'A' || letter=='a'){letter2=0;letter='A';}
		else if(letter== 'B' || letter=='b'){letter2=1;letter='B';}
		else if(letter== 'C' || letter=='c'){letter2=2;letter='C';}
		else if(letter== 'D' || letter=='d'){letter2=3;letter='D';}
		else if(letter== 'E' || letter=='e'){letter2=4;letter='E';}
		else if(letter== 'F' || letter=='f'){letter2=5;letter='F';}

		if(seat[num-1][letter2]==0)
		{
			printf("\n\nSeat %c%d is Vacant",letter,num);
		}
		else
		{
			for(i=0;i<c;i++)
			{
				if(customer[i].col==letter && customer[i].row==num)
				{
					temp=i;
				}
			}
			printf("\n\nSeat %c%d is already Reserved by %s %s",letter,num,customer[temp].firstName,customer[temp].lastName);
		}
	}
	getch();
}
/*=====================================*/
void displayOrder()
{
	int i;

	clrscr();

	printf("Order of Reservation:\n\n");


	for(i=0;i<c;i++)
	{
		printf("%d.) %s, %s  -  %c%d\n",i+1,customer[i].lastName,customer[i].firstName,customer[i].col,customer[i].row);
	}

	getch();
}
/*=====================================*/
void deleteReserve()
{
	char letter;
	int num;

	printf("\n\nDelete Reservation\n\n");
	printf("Column Letter: ");
	scanf("%s",&letter);
	printf("Row Number: ");
	scanf("%d",&num);
	
	if()

	getch();
}
/*=====================================*/
