#include<stdio.h>
main(){
	
long num[1000],search,size;
int i,yesNo=0;

clrscr();	

printf("Input Size: ");
scanf("%ld",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}

printf("Enter Number to be Searched: ");
scanf("%ld",&search);

for(i=0;i<size;i++)
{
	if(num[i]==search)
	{
		yesNo=1;
		break;
	}
}

if(yesNo==1)
{
	printf("%ld is Present",search);
}
else
{
	printf("%ld is Not Present",search);
}
	
	
getch();
}



