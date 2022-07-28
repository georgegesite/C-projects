#include<stdio.h>
main(){

long num[1000];
int i,j,size,temp;

clrscr();

printf("Input size: ");
scanf("%d",&size);

for(i=0;i<size;i++)
{
    printf("Input%d: ",i+1);
    scanf("%ld",&num[i]);
}

for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
	if(num[i]<num[j])
	{
	    temp=num[i];
	    num[i]=num[j];
	    num[j]=temp;
	}
    }
}

printf("\n\nSorted: ");

for(i=0;i<size;i++)
{
    printf("%ld ",num[i]);
}

getch();
}