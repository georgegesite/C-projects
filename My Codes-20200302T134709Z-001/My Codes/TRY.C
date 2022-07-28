#include<stdio.h>
#include<string.h>
main(){

char *str;
int i=0;

clrscr();

for(;;)
{
    scanf("%c",&str[i]);

    if(str[i]=='\n')
    {
	break;
    }
    i++;
}

printf("\n%s",str);

getch();
}