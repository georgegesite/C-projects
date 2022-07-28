#include<stdio.h>
main(){

int num[100],arr[100][100],largest=0;
int i,j,row=0,col=0,size,sum;

clrscr();

for(i=0;i<100;i++)
{
    for(j=0;j<100;j++)
    {
	arr[i][j]=0;
    }
}

printf("Size: ");
scanf("%d",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
    scanf("%d",&num[i]);
}

printf("\n");

for(i=0;i<size;i++)
{
    col=0;
    for(j=1;j<=num[i];j++)
    {
	if(num[i]%j==0)
	{
	    arr[row][col]=j;
	    col++;
	}
    }
    row++;
    if(col>largest)
    {
	largest=col;
    }
}

for(i=0;i<size;i++)
{
    sum=0;
    printf("%3d  -",num[i]);
    for(j=0;j<largest;j++)
    {
	if(arr[i][j]==0)
	{
	    printf("    ");
	}
	else
	{
	    sum=sum+arr[i][j];
	    printf("%4d",arr[i][j]);
	}
    }
    printf(" = %d\n",sum);
}

printf("        ");

for(i=0;i<largest;i++)
{
    printf("--- ");
}
printf("\n      ");

for(j=0;j<largest;j++)
{
    sum=0;
    for(i=0;i<size;i++)
    {
	sum=sum+arr[i][j];
    }
    printf("%4d",sum);
}

getch();
}