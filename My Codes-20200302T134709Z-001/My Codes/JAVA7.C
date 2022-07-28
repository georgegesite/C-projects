#include<stdio.h>
main(){

long num[1000],size,rotation,temp;
int i,j;

clrscr();
	
printf("Enter Size: ");
scanf("%ld",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}	

printf("Rotation: ");
scanf("%ld",&rotation);

for(i=0;i<rotation;i++)
{
	temp=num[size-1];
	
	for(j=size-1;j>=0;j--)
	{
		num[j]=num[j-1];
	}
	
	num[0]=temp;
}

printf("Output: ");

for(i=0;i<size;i++)
{
	printf("%ld ",num[i]);
}
	
getch();	
}
