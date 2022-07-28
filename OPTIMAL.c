#include<stdio.h>
#include<conio.h>
int n,page[20],f,fr[20],i,pf=0;
void display()
{
    for(i=0;i<f;i++)
    {
        printf("\t%d",fr[i]);
    }
    printf("\tPF No. %d",pf);  
        printf("\n");  
}
void request()
{
    printf("Enter the length of the Reference String: ");
    scanf("%d",&n);
    printf("Enter the reference string: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&page[i]);
    }
    printf("Enter number of frames: ");
    scanf("%d",&f);
    for(i=0;i<f;i++) // sets frames null or =-1
    {
        fr[i]=-1; 
    }
}
void replace()
{
    int j,flag=0;
    int max,lp[10],index,m;
    for(j=0;j<f;j++) //the n number of frames  are n page faults
    {
        fr[j]=page[j];
        flag=1;
        pf++;
        display();
    }
    for(j=f;j<n;j++)// starts after the n frames
    {       
        flag=0;
        for(i=0;i<f;i++)
        {
            if(fr[i]==page[j])// checks if a number in the frames equals a number from the reference string
            {   
                flag=1;
                break;
            }
        }
        if (flag==1) //try lang
        {
            for(int i=0;i<f;i++)
            {
            printf("\t%d",fr[i]);
            }
            printf("\n");
        }   
        if(flag==0)// if no flag
        {
        for(i=0;i<f;i++) // temporaryy frame array
            lp[i]=0;
        for(i=0;i<f;i++)// check which part of the distance pf the number
        {
            for(m=j+1;m<n;m++)
            {
                if(fr[i]==page[m])
                {
                    lp[i]=m-j;
                    break;
                }
            }
        }
        max=lp[0];
        index=0;
        for(i=0;i<f;i++)//checks which index is the oldest
        {       
            if(lp[i]==0)
            {
                index=i;
                break;
            }
            else
            {
                if(max<lp[i])
                {
                    max=lp[i];
                    index=i;
                }
            }
        }
        fr[index]=page[j];
        pf++;
        display();
        }
    }     
    printf("The number of Page Faults using OPTIMAL are %d",pf);
}
void main()
{
request();
replace();
}