#include<stdio.h>
main(){
    int put[100], count=0, x, i, size, prime[100], compo[100], p=0, c=0;
    printf("Size: ");
    scanf("%d", &size);
    printf("Inputs: ");
    for(x=0;x<size;x++){
        scanf("%d", &put[x]);
        for(i=1;i<put[x];i++){
            if(put[x]%i==0) count++;
        }
        if(count>1){
            compo[c]=put[x];
            c++;
        }
        else{
            prime[p]=put[x];
            p++;
        }
        count=0;
    }
    printf("%d prime numbers: ", p);
    for(i=0;i<p;i++){
        printf("%d ", prime[i]);
    }
    printf("\n%d composite numbers: ", c);
    for(i=c-1;i>=0;i--){
        printf("%d ", compo[i]);
    }
}
