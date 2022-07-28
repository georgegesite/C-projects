#include<stdio.h>
#include<string.h>
main(){

char *str;
int size=0,i;

clrscr();

printf("String: ");
for(;;)
{
    scanf("%c",&str[size]);
    if(str[size]=='\n')
    {
	break;
    }
    size++;
}

for(i=0;i<size;i++)
{
    printf("%c",str[i]);
}


getch();
}