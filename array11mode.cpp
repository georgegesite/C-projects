#include<stdio.h>
main()
{
    int put[50], count[50], i, j, counter=0, modecount, max=0, reps;
    
    printf("Input numbers: ");
    for(i=0;;i++)
    {
        scanf("%d", &put[i]);
        if(put[i]==0) 
		break;
        counter++;
    }
    for(i=0;i<counter;i++)
    {
        modecount=0;
        for(j=0;j<counter;j++)
        {
            if(put[i]==put[j]) 
			modecount++;
        }
        if(modecount>0) 
		count[i]=modecount;
        else 
		count[i]=0;
    }
    for(i=0;i<counter;i++)
    {
        if(count[i]>max) 
		{
		max=i; 
		reps=count[i];
		}
    }
    printf("\nMode of the set: %d\nFrequency: %d", put[max], reps);
}
