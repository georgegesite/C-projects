#include<stdio.h>
main()
{
    long rem, size=0, put, i, determine1, determine2;
    float arr[100];
    
    printf("Input numbers: ");
    scanf("%ld", &put);
    
    for(i=0;put!=0;i++)
    {
        rem=put%10;
        arr[i]=rem;
        put=put/10;
        size++;
    }
        determine1=size/2-1;
        determine2=determine1+1;
    
    if(size%2==0)
    {
        printf("Median: %.1f", (arr[determine2]+arr[determine1])/2);
    }
    else
    {
        printf("Median: %.0f", arr[determine2]);
    }
}
