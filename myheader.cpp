#include <iostream>
#include "myheader.h"

using namespace std;
//enter definition/funtions

int prime (int a)
{
	int count=0;
	for (int i=1;i<=a;i++)
	{
		if (a%i==0)
		count++;
	}
	if (count <=2)
	{
		cout << "Prime";
	}
	else 
	cout <<"Compsite";
}
