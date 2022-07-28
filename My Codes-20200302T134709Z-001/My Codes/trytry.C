#include<stdio.h>
int size=0,num[1000],arr[100][100],arrNum[100],i,j,k,count,gcf,temp;

void input(),factor(),display(),process();

/*=====================================*/

main(){

clrscr();

input();
factor();
display();
process();


getch();
}

/*====================================*/

void input()
{
    printf("Inputs: ");

    for(;;)
    {
	scanf("%d",&num[size]);
	if(num[size]==0)
	{
	    break;
	}
	size++;
    }
}

/*======================================*/

void factor()
{
    for(i=0;i<size;i++)
    {
	arrNum[i]=0;
	for(j=1;j<=num[i];j++)
	{
	     if(num[i]%j==0)
	     {
		 arr[i][arrNum[i]]=j;
		 arrNum[i]++;
	     }
	}
    }
}

/*======================================*/

void display()
{
    printf("\n");
    for(i=0;i<size;i++)
    {
	printf("%4d = ",num[i]);
	for(j=0;j<arrNum[i];j++)
	{
	    printf("%d ",arr[i][j]);
	}
	printf("\n\n");
    }
}

/*======================================*/

void process()
{
    for(i=arrNum[0]-1;i>=0;i--)
    {
	 /*temp[i]=arr[0][i];
	 printf("%d ",temp[i]);*/

	 count=0;

	 for(j=0;j<size;j++)
	 {
	     for(k=arrNum[j]-1;k>=0;k--)
	     {
		 if(arr[j][k]==arr[0][i])
		 {
		     count++;
		     temp=arr[0][i];
		 }
	     }
	 }

	 if(count==size)
	 {
	     gcf=temp;
	     break;
	 }
    }

    printf("The Greatest Common Factor is %d",gcf);
}

/*======================================*/