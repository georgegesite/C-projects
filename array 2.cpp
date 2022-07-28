#include<stdio.h>
main()
{
    long put, i, j;
    char arr[500][500];
    char ask= '*', space=' ';
    
    printf("Input box area: ");
    scanf("%ld", &put);
    for(i=0;i<put;i++)
    {
        for(j=0;j<put;j++)
        {
            if(i==0||i==put-1||j==0||j==put-1)
            {
                
                arr[i][j]=ask;
               
            }
            else arr[i][j]=space;
          
        }
    }
    for(i=0;i<put;i++)
    {
        for(j=0;j<put;j++)
        {
            printf(" %c", arr[i][j]);
        }
        printf("\n");
    }
}
