#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class George{
	public:
	string str,str2;
	void input();
	void process();

};
int main ()
{
	George a;
	a.input();
	a.process();
	return 0;
}

void George::input()
{
	cout<<"Enter String: ";
	getline(cin,str);
	cout<<"Enter Word: ";
	getline(cin,str2);
}

void George::process()
{
	stringstream ss(str);
	string piece;
	int count1=0;
	while(ss>>piece)
	{
	int count=0;
   string::size_type pos = 0;
   while ((pos = piece.find(str2,pos)) !=string::npos) {
          count++;
          pos += str2.length();
   }
   if (count>=1){
   	count1++;
   }}
	cout <<"Number of patterns: "<< count1;
}
