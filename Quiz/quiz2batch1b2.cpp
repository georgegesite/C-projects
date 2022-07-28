#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class George{
	public:
		string str1,cut,temp,word[100];
		int count;
		void input();
		void execute();
		void hehe();
		void output();
};

int main()
{
	George a;
	a.input();
	a.execute();
	a.hehe();
	a.output();
	
}

void George::input()
{
	cout<<"Enter string: ";
	getline(cin,str1);
}

void George::execute()
{
	stringstream ss(str1);
	count=0;
	while(ss>>cut){
		word[count]=cut;
		count++;
}
}

void George::hehe(){
	for(int i=0;i<count;i++){
		for (int j=i+1;j<count;j++)
		{
			if(word[i].size() < word[j].size())
			
				temp=word[i];
				word[i]=word[j];
				word[j]=temp;
		}
	}
}
void George::output()
{
	for (int i=0;i<count;i++)
	{
		cout<<word[i]<< " ";
	}
}
