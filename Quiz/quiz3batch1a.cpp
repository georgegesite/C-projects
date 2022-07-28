#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class George{
	public:
		string str1,str3,str2,cut;
		int count,i,j;
		void input();
		void process2();	
};

int main()
{
	George a;
	a.input();
	a.process2();
	return 0;
}

void George::input(){
	cout<<"Input: ";
	getline(cin,str1);
	cout<<"\nTo Change: ";
	cin>>str2;
	cout<<"Change: ";
	cin>>str3;	
	
}

void George::process2(){
	stringstream ss(str1);
	while(ss>>cut)
	{
	count=0;
	 string::size_type pos = 0;
   while ((pos = cut.find(str2,pos)) !=string::npos) {
          count++;
          pos += str2.length();}
    if (count>=1)
    
	{
	
		 string::size_type pos = 0;
   while ((pos = cut.find(str2,pos)) !=string::npos) 
   	{
   			
   			cut.insert(pos,str3);
          pos += str3.length();
	}
	cout <<"Output: "<<cut <<endl; 
}}
}


