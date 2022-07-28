#include<stdio.h>
#include<string.h>
main(){

char *str1,*str2,*str3;
int compare1;

clrscr();

printf("String1: ");
scanf("%s",str1);
printf("String2: ");
scanf("%s",str2);

str3=strpbrk(str1,str2);
printf("\n%s",str3);


getch();
}