#include<stdio.h>
main ()
{
int x,i;
clrscr();

printf("Enter Num: ");
scanf("%d", &x);

i = x;

while ( i != 1 )
{
  i--;
  x = x*i;
}

printf("answer: %d",x);
getch();
}