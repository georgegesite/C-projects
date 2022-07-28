#include <iostream>
#include <string.h>

using namespace std;

void sort(char str[]);

int main()
{
	char str1[100],str2[100];
	
cout<< "Enter first word";
gets(str1);
cout <<"Enter second word";
gets(str2);

sort(str1);
sort(str2);
}

void sort(char str[])
{
	int temp;
	int len = strlen(str);
	
	for (int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			
			if(str[i]<str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				cout<<str[i];
			}
		}
	}
}
