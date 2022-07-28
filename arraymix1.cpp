#include <stdio.h>
main()
{
    long arr[100];
    long size,num, i, j, temp=0, tp,sum,num1=0,num2=1;
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
    printf ("\nSecond Largest Number is: %ld", arr[1]);
    num=arr[1];
    for (i=0;i<num;i++)
	{
		arr[i]=num1;
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	printf ("\nFibonacci of Second largest: ");
	for (j=0;j<i;j++)
	{
		printf (" %ld", arr[j]);
	}
	printf ("\nReverse Fibonacci of Second largest: ");
	for (j=i-1; j>=0;j--)
	{
		printf (" %ld", arr[j]);
	}
}
