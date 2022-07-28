#include<stdio.h>
main(){

float inp[1000],dec[1000],sum=0,tempFloat,temp;
int i,j,size=0,tempWhole,whole[1000];

clrscr();

printf("Inputs: ");

for(;;)
{
    scanf("%f",&inp[size]);
    if(inp[size]==0)
    {
	break;
    }
    size++;
}

for(i=0;i<size;i++)
{
     whole[i]=(int)inp[i];
     dec[i]=inp[i]-whole[i];
}
printf("\nWhole: ");
for(i=0;i<size;i++)
{
    printf("%5d",whole[i]);
}
printf("\nDecimal: ");
for(i=0;i<size;i++)
{
    printf("%.2f ",dec[i]);
}
printf("\n\n");

for(i=0;i<size;i++)
{
    temp=(float)whole[i]-dec[size-i-1];
    printf("%d - %.2f = %.2f\n",whole[i],dec[size-i-1],temp);

    sum=sum+temp;
}
printf("\nSum = %.2f",sum);

if(sum-(int)sum >= 0.5)
{
    sum++;
}
printf("\nSum = %d",(int)sum);

for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
       if(whole[i]<whole[j])
       {
	   tempWhole=whole[i];
	   whole[i]=whole[j];
	   whole[j]=tempWhole;
       }
       if(dec[i]<dec[j])
       {
	   tempFloat=dec[i];
	   dec[i]=dec[j];
	   dec[j]=tempFloat;
       }
    }
}

if((int)sum%2==0)
{
    printf("\n\nAscending: ");

	for(i=size-1;i>=0;i--)
	{
		if(dec[i]!=0)
		{
		printf("%.2f ",dec[i]);
		}
	}
	for(i=size-1;i>=0;i--)
	{
		if(whole[i]!=0)
		{
		printf("%d ",whole[i]);
		}
	}
}
else
{
    printf("\n\nDescending: ");

	for(i=0;i<size;i++)
	{
		if(whole[i]!=0)
		{
		printf("%d ",whole[i]);
		}
	}
	for(i=0;i<size;i++)
	{
		if(dec[i]!=0)
		{
		printf("%.2f ",dec[i]);
		}
	}
}


getch();
}