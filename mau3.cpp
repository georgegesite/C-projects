#include <stdio.h>
 
int main()
{
    int a,b,c;
    
    printf("Enter any 3 numbers \n");
    scanf("%d %d %d", &a, &b, &c);
   
    if (a> b)
    {
        if (a > c)
        {
            printf("%d is the Largest",&a);
        }
        else
        {
            printf("%d is the Largest", &c);
        }
    }
    else if (b > c)
        printf("%d is the Largest", &b);
    else
        printf("%d is the Largest", &c);
}
