#include<stdio.h>
int size=0;
int input();

main()
{
float *inp;
int i;

clrscr();

inp=input();

for(i=0;i<size;i++)
{
    printf("%f ",inp[i]);
}

getch();
}

int input()
{
    int i;
    float *a;

    printf("Inputs: ");
    for(;;)
    {
	scanf("%f",&a[size]);
	if(a[size]==0)
	{
	    break;
	}
	size++;
    }
    return a;
}