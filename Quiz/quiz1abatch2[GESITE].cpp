#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class George{
	public:
		string str1,str3,str2;
		int count,i,j;
		void input();
		void process();		
};

int main()
{
	George a;
	a.input();
	a.process();
	return 0;
}

void George::input(){
	cout<<"Input: ";
	getline(cin,str1);
	cout<<"To Change: ";
	cin>>str2;
	cout<<"Change: ";
	cin>>str3;
}

void George::process(){
		 string::size_type pos = 0;
   while ((pos = str1.find(str2,pos)) !=string::npos) 
   	{
   			str1.replace(pos,str2.length(),str3);
          pos += str3.length();
	}
	cout <<"Output: "<<str1; 
}
