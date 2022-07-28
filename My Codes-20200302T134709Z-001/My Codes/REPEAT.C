#include<stdio.h>
main(){

int num[1000],num2[1000],size=0,size2=0,i,j,k;

clrscr();

for(;;)
{
    scanf("%d",&num[size]);
    if(num[size]==0)
    {
	break;
    }
    size++;
}

for(i=0;i<size;i++)
{
    k=0;
    for(j=i+1;j<size;j++)
    {
	if(num[i]==0)
	{
	    continue;

	}
	else
	{
	    if(num[i]==num[j])
	    {
		num[j]=0;
		k++;
	    }
	}
    }
    if(k!=0)
    {
	num2[size2]=num[i];
	size2++;
    }
}

for(i=0;i<size2;i++)
{
    printf("%d ",num2[i]);
}

getch();
}