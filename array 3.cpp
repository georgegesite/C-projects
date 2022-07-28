#include<stdio.h>
main()
{
    long put, i, j, count=0, temp, x=0;
    char arr[100][100];
    printf("Enter odd number for the base: ");
    scanf("%ld", &put);
    if(put%2==0)printf("Error! Only odd numbers are allowed.");
    else{
    temp=put;
    
    for(;put>=0;)
    {
        x++;
        put=put-2;
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<temp;j++)
        {
            if(i==x-1|| j>=x-count-1&&j<=x+count-1) arr[i][j]='*';
            else arr[i][j]=' '; 
        }
        count++;
    } 
    for(i=0;i<x;i++)
    {
        for(j=0;j<temp;j++)
        {
            printf(" %c", arr[i][j]);
        }
        printf("\n");
    }}
}
