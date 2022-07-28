#include <stdio.h>
main()
{
	float input,in;
	float cent=0.3937;
	printf("Enter X centimeters: ");
	scanf("%f", &input);
	in=input*cent;
	printf("%.5f",in);
	if (in>1)
	printf(" inches");
	else
	printf(" inch");
}
