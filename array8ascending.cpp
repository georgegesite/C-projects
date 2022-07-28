#include <stdio.h>
main()
{
    long arr[100];
    long size, i, j, temp;
    printf("Enter size of array: ");
    scanf ("%ld", &size);
    printf ("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf ("%ld", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf ("Elements of array in sorted ascending order: ");
    for(i=0; i<size; i++)
    {
        printf ("\n%ld", arr[i]);
    }
    printf ("\nElements of array in sorted descending order: ");
    for (i=size-1; i>=0; i--)
    {
    	printf ("\n%ld", arr[i]);
	}
    return 0;
}
