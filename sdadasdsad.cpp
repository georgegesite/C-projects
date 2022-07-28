#include <stdio.h>
 
int main()
{
    int num1=0, num2=0, num3=0;
 
    printf("Enter any 3 numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", &num1, &num2, &num3);
  
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the Largest",&num1);
        }
        else
        {
            printf("%d is the Largest",&num3);
        }
    }
    else if (num2 > num3)
        printf("%d is the Largest",&num2);
    else
        printf("%d is the Largest",&num3);
}
