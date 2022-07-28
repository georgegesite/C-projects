#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Pattern{
	public:
		string input, piece, *brokenString=new string[100], *reserve=new string[100];
		int a, count, b;
		void put();
		void breakString();
		void compare();
		void output();
};

int main(int argc, char** argv) {
	Pattern put;
	put.put();
	put.breakString();
	return 0;
}

void Pattern::put(){
	cout<<"Input string: ";
	getline(cin, input);
}

void Pattern::breakString(){
	a=0;
	istringstream ss(input);
	while(ss>>piece)
	{
		brokenString[a]=piece;
		//cout<<brokenString[a]<<endl;
		a++;
	} 
	compare();
	output();
	delete(brokenString);
	delete(reserve);
}

void Pattern::compare(){
	count=0; b=0; //cout<<"ok si compare";
	string forComparison="0";
	for(int i=0;i<a;i++)
	{ //cout<<"ok c loop gawas";
		for(int j=i+1;j<a;j++)
		{ //cout<<brokenString[i]<<' '<<brokenString[j]<<endl; 
			if(brokenString[i]==brokenString[j])
			{
				reserve[count]=brokenString[i];
				count++;	 
			}
		}
	}
	for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(reserve[i]==reserve[j]) 
			reserve[j]='0';
		}
		if(reserve[i]!=forComparison)
		b++;
	}
}

void Pattern::output(){
	cout<<"Number of pattern: "<<b<<endl;
}
