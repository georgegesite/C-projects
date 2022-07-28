#include<stdio.h>
main(){
	
long num[1000],search,size;
int i,count=0;
	
clrscr();	
	
printf("Enter Size: ");
scanf("%ld",&size);

printf("Inputs: ");
for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}

printf("Enter Number to be Searched: ");
scanf("%ld",&search);

printf("%ld is found at position/s: ",search);

for(i=0;i<size;i++)
{
	if(num[i]==search)
	{
		printf("%d ",i+1);
		count++;
	}
}	

if(count==0)
{
	printf("NONE");
}
	
	
getch();
}
