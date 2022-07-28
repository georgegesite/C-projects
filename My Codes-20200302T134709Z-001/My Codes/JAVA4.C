#include<stdio.h>
main(){

long  num1[1000],num2[1000],size1,size2 ,common[1000];
int i,j,k,c=0,d;

clrscr();
	
printf("Size1: ");
scanf("%ld",&size1);	
printf("Size2: ");
scanf("%ld",&size2);	

printf("1st Inputs: ");

for(i=0;i<size1;i++)
{
	scanf("%ld",&num1[i]);
}

printf("2nd Inputs: ");

for(i=0;i<size2;i++)
{
	scanf("%ld",&num2[i]);
}

printf("Common Elements: ");

/*Process on Finding Common Elements*/	
for(i=0;i<size1;i++)
{
	for(j=0;j<size2;j++)
	{
		if(num1[i]==num2[j])
		{
			common[c]=num1[i];
			c++;				
		}
	}
}

/*Process nga i zero ang mubalik2*/
for(i=0;i<c;i++)
{
	for(j=0;j<c;j++)
	{
		if(i==j)
		{continue;}
		else if(common[i]==common[j])
		{
			common[j]=0;
		}
	}
}

for(i=0;i<c;i++)
{
	if(common[i]==0)
	{
		for(j=i;j<c;j++)
		{
			common[j]=common[j+1];
		}
		c--;
		i--;
	}
}

/*Printing */
for(i=0;i<c;i++)
{
	printf("%ld ",common[i]);
}
	
getch();	
}
