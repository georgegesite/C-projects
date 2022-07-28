#include<stdio.h>
#include<math.h>
main(){

long bin,dec=0,rem,pos=0;
int x=0;

clrscr();

printf("Binary: ");
scanf("%ld",&bin);

for(;bin!=0;)
{
    rem=bin%10;
    dec=dec+(pow(2,pos)*rem);
    pos++;
    bin=bin/10;

    /*determine if its binary or not*/
    if(rem!=0 && rem!=1)
    {
	x=1;
    }
}

if(x==0)
{
    printf("Decimal: %ld",dec);
}
else
{
    printf("Not a binary!");
}

getch();
}