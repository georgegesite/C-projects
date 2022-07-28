#include<stdio.h>
main()
{
    long size,num[100],i,x,count=0,c=0,p=0;
    long comp[100],prime[100];
    printf("Size: ");
    scanf("%ld", &size);
    printf("Inputs: ");
    for(i=0;i<size;i++)
    {
        scanf("%ld", &num[i]);
        for(x=1;x<num[i];x++)
        
		
            if(num[i]%x==0)
            {
                count++;
            }
            if(count>1)
            {
                comp[c]=num[i];
                c++;
            }
            else
            {
                prime[p]=num[i];
                p++;
            }
        count=0;
   		 
        
    }
    printf("\n%ld Prime Numbers: ",p);
        for(x=0;x<p;x++)
        {
            printf(" %ld", prime[x]);
        }
    printf("\n%ld Composite Numbers: ",c);
        for(x=0;x<c;x++)
        {
            printf(" %ld", comp[x]);
        }
}
