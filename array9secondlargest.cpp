#include <stdio.h>
main()
{
    long arr[100];
    long size, i, j, temp=0, tp;
    printf ("Enter Numbers: ");
    for(;;)
    {
    	scanf("%ld", &size);
    	if (size==0)
    	break;
    	arr[temp]=size;
    	temp++;
	}
    for(i=0; i<temp; i++)
    {
        for(j=i+1; j<temp; j++)
        {
            if(arr[j] > arr[i])
            {
                tp = arr[i];
                arr[i] = arr[j];
                arr[j] = tp;
            }
        }
    } 
    printf ("\nElements of array in sorted descending order: ");
    for (i=0;i<temp;i++)
    {
    	printf ("\n%ld", arr[i]);
	}
	printf ("\nSecond Largest Number is: %ld", arr[1]);
    return 0;
}
