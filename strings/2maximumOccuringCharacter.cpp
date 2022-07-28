#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ASCII_SIZE 256

using namespace std;

class George{
	public:
		string str1,result;
		int max=0, len;
		int count[ASCII_SIZE]={0};
		void process()
		
			{
	cout<<"Enter string: ";
	getline(cin,str1);
	len=str1.length();
	for(int i=0;i<len;i++)
	{
		count[str1[i]]++;
		if(max<count[str1[i]])
		{
			max=count[str1[i]];
			result=str1[i];
		}
	}
	cout<<"Max occuring character is: "<<result<<" by "<<max<<" times.";
	
}
		
};

int main()
{
	George a;
	a.process();
}



