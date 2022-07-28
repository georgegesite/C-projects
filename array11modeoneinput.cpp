#include<stdio.h>
main()
{
    long num, arr[50], mode[50], i, j, rem,size=0, modecount, max=0, reps;
    
    printf("Input numbers: ");
    scanf ("%ld", &num);
    for(i=0;num!=0;i++)
    {
        rem=num%10;
        num=num/10;
        arr[i]=rem;
        size++;
    }
    for(i=0;i<size;i++)
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
    printf("\nMode of the set: %ld\nFrequency: %ld", arr[max], reps);
}
