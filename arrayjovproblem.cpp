#include <stdio.h>
main()
{
	float arr[100],mode[100],large[100], ave,sum=0,reps,totalsum,totalsum2,mod,wow;
	long i,j,num,size=0,rem,modecount,plus=0,max=0,total1,total2;
	printf ("Enter Number: ");
	scanf ("%ld", &num);
	for (i=0;num!=0;i++)
	{
		rem=num%10;
		num=num/10;
		arr[i]=rem;
		size++;
	}
		for (i=0;i<size;i++)//mean code
	{
		sum=sum+arr[i];
	}
	ave=sum/size;
	printf ("\nAverage is: %.2f", ave);
		if (size%2==0)//median code
		{
			printf ("\nMedian is: %.1f", (arr[size/2] + arr[(size/2)-1])/2);
		}
		else
		{
			printf ("\nMedian is: %.2f", arr[size/2]);
		}
	 for(i=0;i<size;i++)//mode code
    {
        modecount=0;
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j]) 
			modecount++;
        }
        if(modecount>0) 
		mode[i]=modecount;
        else 
		mode[i]=0;
    }
    for(i=0;i<size;i++)
    {
        if(mode[i]>max) 
		{
		max=i; 
		reps=mode[i];
		}
    }
    printf("\nMode is: %.1f" , arr[max]);
    //totalsum of mean,median and mode
    mod=arr[max];
    if (size%2==0)
	{
    totalsum=ave+mod+(arr[size/2] + arr[(size/2)-1])/2;
    printf ("\n\nTotalsum: %.2f",totalsum);
    
	}
	else 
	{
	totalsum2=ave+mod+arr[size/2];
    printf ("\n\nTotalsum: %.2f",totalsum2);	
	}	
}
