#include <iostream>

using namespace std;

int main()
{
	string str;
	cout<<"Enter string";
	cin>>str;
	int n= str.length();
	int count=0;
	for(int i=0;i<n;i++)
	{
		if (str[i]!=str[n-i-1])
		count++;
		break;
	}
	if(count==1)
	{
		cout<<"String is not a Palindrome";
	}
	else
	cout<<"String is a Palindrome";
}

