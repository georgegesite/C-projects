#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include "quiz32.h"
using namespace std;
string str1, str2, str3, arr[100], sub1, sub2;
		int i,j;
void george::input()
{
	cout<<"Enter Strings: ";
	getline(cin,str1);
	cout<<"Enter pattern: ";
	cin>>str2;
	cout<<"Enter word to be inserted: ";
	cin>>str3;
	cout<<"Ouput: ";
}

void george::execute()
{
	i=0;
	j=0;
	stringstream ss(str1);
	while(ss>>arr[i]){
	j=0;
	append();
	cout<<arr[i]<< " ";
	i++;	
	}
}

void george::append()
{
	int num=arr[i].find(str2,j);
	if(num>=0)
	{
		sub1=arr[i].substr(0,num+str2.length());
		sub2=arr[i].substr(num+str2.length(),arr[i].length());
		arr[i]=sub1+str3+sub2;
		j=sub1.length()+str3.length();
		append();
	}
}
