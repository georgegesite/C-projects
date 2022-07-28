#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class George{
	public:
	string str1,cut,word[100];
	int count;
	void process();
};

int main()
{
	George a;
	a.process();
	return 0;
}

void George::process()
{
	cout<<"Enter string: ";
	getline(cin,str1);
	stringstream ss(str1);
	count=0;
	while(ss>>cut)
	{
		word[count]=cut;
		count++;
	}
	cout<<"Reverse String: ";
	for(int i=count;i>=0;i--)
	{
		cout<<word[i]<<' ';
	}
}
