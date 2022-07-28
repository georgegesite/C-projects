#include<stdio.h>

int input();

main(){
int *v;

clrscr();

v=input();

printf("%d %d",v[0],v[1]);

getch();
}

int input()
{
    int *a;

    scanf("%d %d",&a[0],&a[1]);
    return a;
}