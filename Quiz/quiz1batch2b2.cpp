#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class George{
	public:
		string str1,cut,temp,word[100];
		int count,x,y;
		void input();
		void process();
		void output();
};

int main()
{
	George a;
	a.input();
	a.process();
	a.output();
}

void George::input()
{
	cout <<"Enter string: ";
	getline (cin, str1);
	cout<<"Enter swap indexes: ";
	cin>>x;
	cin>>y;
}

void George::process()
{
	stringstream ss(str1);
	count=0;
	while(ss>>cut){
		word[count]=cut;
		count++;
	}
	temp=word[x-1];
	word[x-1]=word[y-1];
	word[y-1]=temp;		
}

void George::output()
{
	for (int i=0;i<count;i++){
		cout<<word[i]<< " ";
	}
}

