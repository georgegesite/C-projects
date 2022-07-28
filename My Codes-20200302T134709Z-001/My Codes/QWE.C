
#include<stdio.h>
main()
{

	float eng,sci,math,ave;
	clrscr();

	printf("Input English:");
	scanf("%f",&eng);
	printf("\nInput Science:");
	scanf("%f",&sci);
	printf("\nInput Math:");
	scanf("%f",&math);

	if (eng>=75&&eng <=100) printf("\nPass!");  else printf("\n not passed");
	if (sci>=75&&sci<=100) printf("\nPass!");  else printf("\n not passed");
	if (math>=75&&math<=100) printf("\nPass!"); else printf("\n not passed");

	ave=(eng+sci+math)/3;
	printf("\n\n Average is %.3f",ave);

	if(ave >=75&&ave<=100) printf("\n Congratulations! You passed this sem!");
	else if (ave>100) printf("\n Out of Range");
	else printf("\n Better luck next time. :( ");

	getch();
	return 0;

}



