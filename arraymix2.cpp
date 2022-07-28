#include<stdio.h>
main(){
    int put, j, i,c=0, temp;
    float arr[100];
    printf("Input numbers: ");
    for(i=0;;i++){
        scanf("%d", &put);
        if(put==0) break;
        arr[i]=put;
        c++;
    }  
    for(i=0;i<c;i++){
        for(j=i+1;j<c;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSet in ascending order: ");
    for(i=0;i<c;i++){
        printf("%.0f ", arr[i]);
    } 
    if(c%2==0) printf("\nMedian of the set: %.2f", (arr[c/2]+arr[(c/2)-1])/2);
    else printf("\nMedian of the set: %.2f", arr[c/2]);
}
