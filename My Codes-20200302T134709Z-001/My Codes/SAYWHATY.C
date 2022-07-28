#include<stdio.h>
main(){

long start,counter,count=1,i,j,k;
long num[100][100];	
long rev=0,rem,dig1=0,dig2=0;
clrscr();

for(i=0;i<100;i++)
{
	for(j=0;j<100;j++)
	{
		num[i][j]=NULL;
	}
}

printf("Say what you see Program\n\n");
printf("Enter a Number: ");
scanf("%ld",&start);
printf("Enter Number of Counts: ");
scanf("%ld",&counter);
printf("Output: \n\n");

for(;start!=0;)
{
	rev=(rev*10)+(start%10);
	start=start/10;
	dig1++;
}

for(i=0;rev!=0;i++)
{
	rem=rev%10;
	
	if(rem==0)
	{
		num[0][i]=10;
	}
	else
	{
		num[0][i]=rem;
	}
	
	rev=rev/10;
	dig2++;
}

if(dig1!=dig2)
{
	num[0][dig1-1]=10;
}

for(i=0;i<counter;i++)
{
	k=0;

	for(j=0;num[i][j]!=NULL;j++)
	{
		if(num[i][j]==num[i][j+1])
		{
			count++;
		}
		else
		{
			num[i+1][k]=count;
			k++;
			num[i+1][k]=num[i][j];
			k++;
			count=1;
		}
	}
}

for(i=0;i<counter;i++)
{
	printf("%3ld:  ",i+1);
	for(j=0;num[i][j]!=NULL;j++)
	{
		if(num[i][j]==10)
		{
			printf("0 ");
		}
		else
		{
			printf("%ld ",num[i][j]);
		}
	}
	printf("\n");
}
	
getch();	
}
