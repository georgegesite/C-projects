#include<stdio.h>
long num[1000],size,i,j,pos,temp;

void sort()
{
    for(i=0;i<size;i++)
    {
	for(j=0;j<size;j++)
	{
	    if(num[i]>num[j])
	    {
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
	    }
	}
    }
}

main(){

clrscr();

printf("Array Size: ");
scanf("%ld",&size);
printf("Elements: ");

for(i=0;i<size;i++)
{
    scanf("%ld",&num[i]);
}

printf("Position According to Largest to Smallest Order: ");
scanf("%ld",&pos);

if(pos>size || pos<0)
{
    printf("\n\nError");
}
else
{
    sort();

    if(pos%10==1)
    {
	printf("The 1st largest number is %ld",num[pos-1]);
    }
    else if(pos%10==2)
    {
	printf("The 2nd largest number is %ld",num[pos-1]);
    }
    else if(pos%10==3)
    {
	printf("The 3rd largest number is %ld",num[pos-1]);
    }
    else
    {
	printf("The %ldth largest number is %ld",pos,num[pos-1]);
    }
}

getch();
}