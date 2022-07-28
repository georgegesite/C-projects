#include <iostream>
#include <string>
#include <sstream>
#include "quiz3.h"
using namespace std;
string str1,str2,arr[100],append,keeper[100];
		int i,j,num;
void george::input()
{
	cout<<"Input string: ";
	getline(cin, str1);
	cout<<"Word: ";
	cin>>str2;
	append=str2+str2;
	cout<<"No. of rotations: ";
	cin>>num;
	cout<<"Output: ";
}

void george::execute()
{
	i=0;
	stringstream ss(str1);
	while(ss>>arr[i])
	{
		finder();
		i++;
	}
}

void george::finder()
{
	int find = append.find(arr[i],0);
	if(find==num)
	{
		keep();
	}
}

void george::keep()
{
	keeper[j]=arr[i];
	j++;
}

void george::output()
{
	if(j>0)
	{
		cout<<str2<<" ";
		for(int q=0;q<j;q++)
		{
			cout<<keeper[q]<<" ";
		}
	}
	
}
