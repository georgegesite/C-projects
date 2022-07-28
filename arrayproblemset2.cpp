#include <stdio.h>
main()
{
	long num, temp[100] ,arr[100],i,j,count=0,count2=0,sum=0,rem;
	printf ("Inputs: ");
	for ( ; ; )
	{
		scanf ("%ld", &num);
		if (num==0) 
		break;
		arr[count]=num;
		count++;
	}
	for(i=0;i<count;i++)
	{
        for(;arr[i]!=0;)
		{
            rem=arr[i]%10;
            arr[i]=arr[i]/10;
            temp[count2]=rem;
           	count2++;
        }
        	if(count2%2!=0 && count2!=1)
		{
            	arr[i]=temp[count2/2];
        }
        	else 
			arr[i]=0;
        	count2=0;
    }
    for(i=0;i<count;i++)
	{
        sum=sum+arr[i];
    	}
    printf("\nSum of center digits: %ld", sum);
}
