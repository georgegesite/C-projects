#include <iostream>
#include <algorithm>
#include <string>
#include "patternsubstr.h"

using namespace std;


//functions
void patternsubstr:inspect(){
	cout<<"Input string: ";
	cin>>str1;
	cout<<"Input string2: ";
	cin>>str2;
	int i,j;
	i=0;
	while(i<str2.length())
	{
		for(j=i;j<str2.length();j++)
		{
			find1=str2.substr(i,j);	
			store();
		}i++;
		
	}output();
}

void patternsubstr::store( ){
	int count=0;
	num=str1.find(find1, 0);
	if(num>=0)
	{
		found[count]=find1;
		count++;	
	}
	
}

void patternsubtr::output()
{
	int max=0;
	for(int i=0;i<count;i++)
	{
		if(found[i].length()>max)
		{
			max=found[i].length();
			maxword=found[i];
		}
	}
	cout<<"Maxword: "<<maxword;
}




