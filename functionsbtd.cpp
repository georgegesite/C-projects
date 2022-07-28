#include<stdio.h>
#include<math.h>
main()
{
	int put, rem, num, i=0, fin, dec=0, a=0;
	printf("Input binary: ") ;
	scanf("%d", & put) ;
	
	for(;put!=0;)
	{
		rem=put%10;
		
	
			num=pow(2, i) ;
			fin=rem*num;
			dec=dec+fin;
	
		put=put/10;
		i++;
		a++;
	} 
	printf("Decimal:  %d", dec) ;
	
}
