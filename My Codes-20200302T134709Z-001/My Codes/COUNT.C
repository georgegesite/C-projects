#include<stdio.h>
main(){

int num[1000],num2[1000],size=0,size2=0,i,j,k,count[1000];



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
    count[size2]=0;

    for(j=i;j<size;j++)
    {
	    if(num[i]==num[j])
	    {
		count[size2]++;

		if(i!=j)
		{
		    num[j]=0;
		}
	    }
    }
    num2[size2]=num[i];
    size2++;
}

for(i=0;i<size2;i++)
{
    if(num[i]!=0)
    {
	printf("%d - %d\n",num2[i],count[i]);
    }
}}



