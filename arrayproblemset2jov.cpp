#include<stdio.h>
void center(long x[], long y){
    long i, rem, count=0, hold[100];
    for(i=0;i<y;i++){
        for(;x[i]!=0;){
            rem=x[i]%10;
            x[i]=x[i]/10;
            hold[count]=rem;
            count++;
        }
        if(count%2!=0&&count!=1){
            x[i]=hold[count/2];
        }
        else x[i]=0;
        count=0;
    }
}
main(){
    long put[100], sum=0, i, count=0;
    printf("Inputs: ");
    for(i=0;;i++){
        scanf("%ld", &put[i]);
        if(put[i]==0) break;
        count++;
    }
    center(put, count);
    for(i=0;i<count;i++){
        sum=sum+put[i];
    }
    printf("\nSum of center digits: %ld\n*Even numbers of digits and one-digit numbers has no center", sum);
}
