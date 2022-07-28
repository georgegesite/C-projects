#include<stdio.h>
long pow(long x, long y)
{
	long power=1;
	
	for(;y!=0;y--)
	{
		power=power*x;
	} 
	
		return power;	
} 

long btod(long b)
{
	long i, rem, dec=0;
	
	for(i=0;b!=0;i++)
	{
			rem=b%10;	
			b=b/10;
			dec=dec+(rem*pow(2, i));
	} 
	
	return dec;
} 

long dtob(long d)
{
	long rem, tempbin=0, bin=0, count=0, i;
	
	for(;d!=0;)
	{
		rem=d%2;
		d=d/2;
		tempbin=tempbin*10+rem;	
  count++;
	}
	  printf("\nBinary: ");
	 for(i=0;i<count;i++)
	 {
	 	rem=tempbin%10;
   printf("%ld ", rem);       
	 	bin=bin*10+rem;
	 	tempbin=tempbin/10;
	 } 	
	 
	 return bin;
} 

long comprime(long c)
{
		long rem, count=0, pmax=0, pmin=9, cmax=0, cmin=9, i, max, min;
		
		for(;c!=0;)
		{
			count=0;
			rem=c%10;
			for(i=1;i<rem;i++)
			{
				if(rem%i) count++;	
			} 	
			
			if(count>1) 
			{
				printf("\nComposite: %ld", rem);	
				if(rem>cmax) cmax=rem;
				if(rem<cmin) cmin=rem;
			} 
			else
			{
				printf("\nPrime: %ld", rem);
				if(rem>pmax) pmax=rem;
				if(rem<pmin) pmin=rem;	
			} 
   c=c/10;
		} 
		
		printf("\nLargest prime: %ld\nLargest composite: %ld", pmax, cmax);
		printf("\nSmallest prime: %ld\nSmallest composite: %ld", pmin, cmin);
		
		if(pmax>cmax) 
		{
		max=pmax;
		printf("\nLargest number is prime %ld", pmax);
		} 
		else 
		{
		max=cmax;
		printf("\nLargest number is composite %ld", cmax);
		}
		
		if(pmin<cmin) 
		{
		min=pmin;	
		printf("\nSmallest number is prime %ld", pmin);
		} 
		else 
		{
		min=cmin;
		printf("\nSmallest number is composite %ld", cmin);
		} 
		
		return max+min;
}

long fibo(long f)
{
	long sum, f1=0, f2=1, i;
	printf("Fibonacci: ");
	for(i=0;i<f;i++)
	{
		sum=f1+f2;
		f1=f2;
		f2=sum;
		printf("%ld ", f1);	
	} 	
	
	return 0;
} 

long tribo(long t)
{
	long sum, f1=0, f2=1, f3=2, i;
	 printf("Tribonacci: ");
		for(i=0;i<t;i++)
		{
			sum=f1+f2+f3;
			f1=f2;
			f2=f3;
			f3=sum;
			printf("%ld ", f1);	
		}
		
		 	return 0; 	
} 

main()
{
	long put, conv, sum, convdone;
	
	printf("Enter conversion:\n(1)binary to decimal\n(2)decimal to binary\n");
	scanf("%ld", &conv);
	if(conv==1){
	printf("\nInput binary: ");
	scanf("%ld", &put);}
	else{
	printf("\nInput decimal: ");
	scanf("%ld", &put);} 
    
 
	if(conv==1)
	{
	convdone=btod(put);
	printf("Decimal: %ld\n", convdone);	
	} 
	else
	{
	convdone=dtob(put);
	}
     
	sum=comprime(convdone);
 printf("\nSum: %ld\n", sum);
	
	if(convdone%2==0)
	fibo(sum);
	else
	tribo(sum);
	
}
