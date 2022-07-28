#include<stdio.h>
main(){

long num[1000],i,j,sum=0,size,high,low,sum2=0,count=0;

clrscr();

printf("Size: ");
scanf("%ld",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
    scanf("%ld",&num[i]);
}
printf("Lower Limit: ");
scanf("%ld",&low);
printf("Upper Limit: ");
scanf("%ld",&high);

for(i=0;i<size;i++)
{
    if(num[i]>=low && num[i]<=high)
    {
	sum=sum+num[i];
    }
}

if(sum>=10)
{
    for(;sum!=0;)
    {
	sum2=sum2+(sum%10);
	sum=sum/10;
    }
}
else
{
    sum2=sum;
}

printf("Simplified Sum = %ld",sum2);

for(i=0;i<size;i++)
{
    if(sum2==num[i])
    {
	count++;
    }
}

if(count==0)
{
    printf("\nNumber not Found");
}
else
{
    printf("\nNumber is Found");
}

getch();
}