#include<stdio.h>
main(){

long num[100][100],size,i,j,temp,sum[100],dig,k,max=0,flag;
double num2[100],sum2=0;


printf("Size: ");
scanf("%ld",&size);
printf("Inputs: \n\n");

for(i=0;i<size;i++)
{
    j=0;
    sum[i]=0;
    for(;;)
    {
	scanf("%ld",&num[i][j]);
	if(num[i][j]==0)
	{
	    j++;
	    break;
	}
	temp=num[i][j];

	dig=0;

	for(;temp!=0;)
	{
	    temp=temp/10;
	    dig++;
	}
	if(dig%2!=0)
	{
	    dig=dig/2;
	    temp=num[i][j];

	    for(k=0;k<dig;k++)
	    {
		 temp=temp/10;
	    }
	    sum[i]=sum[i]+(temp%10);
	}

	j++;
    }
}
printf("\n\nSums: ");

for(i=0;i<size;i++)
{
    printf("%ld ",sum[i]);

    if(sum[i]>max)
    {
	max=sum[i];
    }
}

for(i=0;i<size;i++)
{
    if(sum[i]==max)
    {
	flag=i;
    }
}
printf("\n\nOutput:\n\n");

for(i=0;;i++)
{
    if(num[flag][i]==0){break;}
    printf("%ld ",num[flag][i]);

    num2[i]=(float)num[flag][i]/10;
}
printf("\n");

for(i=0;;i++)
{
    if(num[flag][i]==0){break;}
    printf("%.2lf  " ,num2[i]);
}
printf("\n");

for(i=0;;i++)
{
    if(num[flag][i]==0){break;}
    printf("%.2lf ",num2[i]-(int)num2[i]);
    sum2 = sum2 + (num2[i]-(int)num2[i]);
}
printf(" = %.2lf",sum2);

}
