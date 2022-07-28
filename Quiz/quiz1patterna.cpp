#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class Hey{
	public:
		string str1,str2,cut;
		int count;
		void input();
		void process();
		void output();
};


int main(){
	Hey a;
	a.input();
	a.process();
	a.output();
	return 0;
}

void Hey::input(){
	cout<<"Enter String: ";
	getline(cin,str1);
	cout<<"Enter Word: ";
	cin>>str2;
}

void Hey::process(){
	stringstream ss(str1);
	count=0;
	while(ss>>cut){
		if(cut.find(str2,0)>=1){	count++;
		}
	
	}
}

void Hey::output(){
	cout<<"Number of Patterns: "<<count;
}
