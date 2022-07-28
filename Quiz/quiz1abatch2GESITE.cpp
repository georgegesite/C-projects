#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class George{
	public:
		string str1,str3,str2;
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
}

void George::process2(){
	for(;;){
	cout<<"\nTo Change: ";
	cin>>str2;
	count=0;
	 string::size_type pos = 0;
   while ((pos = str1.find(str2,pos)) !=string::npos) {
          count++;
          pos += str2.length();}
    if (count>=1)
    {
	cout<<"Change: ";
	cin>>str3;
		 string::size_type pos = 0;
   while ((pos = str1.find(str2,pos)) !=string::npos) 
   	{
   			str1.replace(pos,str2.length(),str3);
          pos += str3.length();
	}
	cout <<"Output: "<<str1 <<endl; 
}
else{
cout <<"No pattern found";
break;
}
}
}


