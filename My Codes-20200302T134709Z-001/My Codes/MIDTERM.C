#include<stdio.h>
main(){

int size=0,num[100],i,j,count;

clrscr();

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
printf("\n\n");
for(i=0;i<size;i++)
{
    printf("%d - ",num[i]);

    for(j=1;j<=num[i];j++)
    {
	if(num[i]%j==0)
	{
	    printf("%d ",j);
	}
    }
    printf("\n");
}
printf("\n\n");

for(i=0;i<size;i++)
{

}

getch();
}