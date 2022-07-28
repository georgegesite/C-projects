#include <stdio.h>
main()
{
	long num, arr[100],temp[100], c=0,c2=0,i,j,sum=0,rem;
	printf ("Enter Digits:");
	for ( ; ; )
	{
		scanf ("%ld", &num);
		if (num==0)
		break;
		arr[c]=num;
		c++;
	}
	for (i=0;i<c;i++)
	{
		while (arr[i]!=0)
		{
			rem=arr[i]%10;
			arr[i]=arr[i]/10;
			temp[c2]=rem;
			c2++;
		}
			if(c2%2!=0 && c2!=1)
		{
            	arr[i]=temp[c2/2];
        }
        	else 
			arr[i]=0;
        	c2=0;
	}
	for(i=0;i<c;i++)
	{
        sum=sum+arr[i];
    	}
    printf("\nSum of center digits: %ld", sum);
}
