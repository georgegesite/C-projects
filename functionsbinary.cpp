#include <stdio.h>
long dtb (long x);
main()
{
	long db, num;
	printf("Enter Decimal: ");
	scanf("%ld", &num);
	db=dtb(num);
	printf("Binary of %ld is %ld",num,db);
	return 0;

}
long dtb (long x)
{
	long dtbnum=0,temp=1,rem;
	for (;x!=0;)
	{
		rem=x%2;
		x=x/2;
		dtbnum=dtbnum+rem*temp;
		temp=temp*10;
	}
	return dtbnum; 
}

