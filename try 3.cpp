#include <stdio.h>
long priocomp (long x);
int main(){
long y,pc,i,count;
printf("Enter integer: ");scanf("%ld",&y);
count = priocomp(y);
if(count==1){
printf("\n\n%d is a composite number",y);
}
else if(count==0){
printf("\n\n%d is a prime number",y);
}
return 0;
}
long priocomp (long x)
{
	long count=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}	
	if(count>2)
	return 1;
	else
	return 0;
}	

