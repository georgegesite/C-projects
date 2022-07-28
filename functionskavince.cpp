#include <stdio.h>
long decimalBinary(long x);
long primeComposite(long x);
long fibo(long x);
main(){
	int num,a,b,c,choice;
	printf(" 1 = Decimal to Binary\n 2 = Prime or Composite\n 3 = Fibonacci");
	printf("\n\n Enter Choice: ");
	scanf("%ld",&choice);
	if(choice==1){
		printf("\n Enter Decimal: ");
		scanf("%ld",&num);
		a=decimalBinary(num);
		printf("\n Binary is: %ld",a);
		}
	if(choice==2){
		printf("\n Enter Number: ");
		scanf("%ld",&num);
		b=primeComposite(num);
		if(b<=2){
		printf("\n %ld is Prime",num);
		}
		else{
		printf("\n %ld is Composite",num);
			}
		}
	if(choice==3){
		printf("\n Enter Number: ");
		scanf("%ld", &num);
		c=fibo(num);
		}
	}
	long decimalBinary(long x){
		long rem,temp=1,bnum=0;
		for(;x!=0;){
			rem=x%2;
			x=x/2;
			bnum=bnum+rem*temp;
			temp=temp*10;
			}
			return bnum;
		}
	long primeComposite(long x){
		long count=0,i;
		for(i=1;i<=x;i++){
			if(x%i==0){
				count++;
				}
			}
			return count;
	}
	long fibo(long x){
		long num1=0,num2=1,sum,i;
		printf(" ");
		for(i=1;i<=x;i++){
			printf("%ld ",num1);
			sum=num1+num2;
			num1=num2;
			num2=sum;
			}
		}
