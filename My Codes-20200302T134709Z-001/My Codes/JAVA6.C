#include<stdio.h>
main(){

long num[1000],sum,size,check[1000],add1[1000],add2[1000];
int i,j,a=0;

clrscr();
	
printf("Enter Size: ");
scanf("%ld",&size);
printf("Inputs: ");

for(i=0;i<size;i++)
{
	scanf("%ld",&num[i]);
}

printf("Target Sum: ");
scanf("%ld",&sum);

printf("Output/s: \n\n");

for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{
		if(i==j)
		{
			continue;
		}
		
		if((num[i]+num[j])==sum)
		{
			/*printf("%ld+%ld\n",num[i],num[j]);*/
			add1[a]=num[i];
			add2[a]=num[j];
			a++;
		} 
	}
}



for(i=0;i<a;i++)
{
	printf("%ld+%ld = %ld\n",add1[i],add2[i],sum);

}
	
getch();
}
