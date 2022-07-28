#include<stdio.h>
main()
{
    int log, put, tempput, putcount=0, counts, num, count=1, i, j, arr[100][100],rem, z=0;
    printf("Wanna play Say What You See?\nLog in(1)\tLog out(2)\t>>");
    scanf("%d", &log);
    if(log!=2&&log!=1)printf("\nError. You have selected an invalid key.");
    if(log==1)
    {
    printf("\nWelcome to the Say What You See Program!");    
    printf("\n\nEnter number of counts: ");
    scanf("%d", &counts);
    printf("Enter number: ");
    scanf("%d", &put);
        tempput=put;
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                arr[i][j]=NULL;
            }
        }
        for(;;)
        {
            put=put/10;
            putcount+=1;
            if(put==0)
            {
                for(j=putcount-1;tempput!=0;j--){
                rem=tempput%10;
                
                arr[0][j]=rem;
                tempput=tempput/10;}
                break;
            }
            
        }
        for(i=0;i<counts;i++)
        {
            for(j=0;arr[i][j]!=NULL;j++)
            {
                if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]!=NULL)         
                    count++;
                else
                {   num=arr[i][j];
                    arr[i+1][z]=count;
                    arr[i+1][z+1]=num;
                    z=z+2; count=1;
                    }
                
                } z=0;
            } 
        
        for(i=0;i<counts;i++)
        {
            printf("%3d: ", i+1);
            for(j=0;arr[i][j]!=NULL;j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }}
    }
