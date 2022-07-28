#include<stdio.h>
main(){
    int put, gcf=0, GCF, fact=0, factor, arr[100], i, j, x=0, a, count=0;
    printf("Input numbers: ");
    for(;;){
        scanf("%d", &put);
        if(put==0)  break;
        printf("\n%d: ", put);
        for(a=1;a<=put;a++){
            if(put%a==0){
                arr[x]=a;
                printf("%d ", arr[x]);
                count++;
                x++;
            }
        }           
    }
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(arr[i]==arr[j]){
                fact++;
                factor=arr[i];
            }
        }
        if(fact>gcf){
            gcf=fact;
            GCF=factor;
        }
    }
    printf("\n\nGCF of numbers: %d", GCF);
}
