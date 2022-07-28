#include<stdio.h>

int power(int n1,int n2);


main(){

int base,powerRaised,result;

clrscr();

printf("Enter Base Number: ");
scanf("%d",&base);

printf("Enter Power Number: ");
scanf("%d",&powerRaised);

result = power(base,powerRaised);

printf("\n%d^%d = %d",base,powerRaised,result);

getch();
}

int power(int base,int powerRaised)
{
    if(powerRaised!=0)
    {
	return(base*power(base,powerRaised-1));
    }
    else
    {
	return 1;
    }
}