#include<stdio.h>
main(){

int num[100],size,i,j,k,count,a,temp;
clrscr();

printf("Size: ");
scanf("%d",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
    scanf("%d",&num[i]);
}

for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
	if(num[i]>num[j])
	{
	    temp=num[i];
	    num[i]=num[j];
	    num[j]=temp;
	}
    }
}

for(i=num[0];;i++)
{
    count=0;
    for(j=0;j<size;j++)
    {
	if(i%num[j]==0)
	{
	    count++;
	}
    }
    if(count==size)
    {
	printf("LCD: %d",i);
	break;
    }
}

getch();
}