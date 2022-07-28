#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int len,len2;
	string waz;
	char lol[100];
	char hey[100];
	gets(lol);
	gets(hey);
	len=strlen(lol);
	cout<<len <<endl;
	waz=strcat(lol,hey);
	cout << waz;
	len2=waz.size();
	cout<< len2;
	
}
