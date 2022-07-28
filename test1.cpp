#include <stdio.h>
main()
{
    long arr[100];
    long size, i, j, temp,count;
 
    // Reading the size of the array
    printf("Enter size of array: ");
  	for(;;)
  	{
  		scanf("%ld", &size);
  		if(size==0)
  		break;
  		arr[size]=count;
  		count++;
	  }
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    printf ("%ld", arr[1]);
  
 
    return 0;
}
