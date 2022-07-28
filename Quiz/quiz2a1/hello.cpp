#include <iostream>
#include <string.h>
#include "hello.h"
using namespace std;


void hello::input(){
	cout<<"Input: ";
	getline(cin,str1);
}

void hello::process2(){
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

