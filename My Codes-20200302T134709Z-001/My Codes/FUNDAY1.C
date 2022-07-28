#include<stdio.h>
long num[1000],size,shift,numShift,i,j,temp;

void shiftLeft()
{
    printf("Shift Right\n\n");

    for(i=0;i<numShift;i++)
    {
	temp=num[0];
	for(j=0;j<size-1;j++)
	{
	    num[j]=num[j+1];
	}
	num[size-1]=temp;
    }
    printf("Elements after %ld Shifts to the Left\n",numShift);

}

void shiftRight()
{
    printf("Shift Left\n\n");

    for(i=0;i<numShift;i++)
    {
	temp=num[size-1];
	for(j=size-1;j>0;j--)
	{
	    num[j]=num[j-1];
	}
	num[0]=temp;
    }
    printf("Elements after %ld Shifts to the Right\n",numShift);
}


main(){

clrscr();
printf("Number of Elements: ");
scanf("%ld",&size);
printf("Elements: ");

for(i=0;i<size;i++)
{
    scanf("%ld",&num[i]);
}

printf("1 - Shift Left\n2 - Shift Right\n\nChoice: ");
scanf("%ld",&shift);
printf("Number of Shifts: ");
scanf("%ld",&numShift);

if(shift==1)
{
    shiftLeft();
}
else if(shift==2)
{
    shiftRight();
}
else
{
    printf("Not in the Choice! ");
}

for(i=0;i<size;i++)
{
    printf("%ld ",num[i]);
}

getch();
}