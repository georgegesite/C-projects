#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class George{
	public:
	string str1,cut,temp[100];
	int count,count1;
	void input();
	void execute();
	void output();
};

int main ()
{
	George a;
	a.input();
	a.execute();
	a.output();
}

void George::input(){
	cout<<"Enter string: ";
	getline(cin,str1);
}

void George::execute()
{
	stringstream ss(str1);
	while (ss>>cut){
		int n =cut.length();
		count=0;
		for(int i=0;i<n;i++)
		{
			if (cut[i]!=cut[n-i-1])
			count++; break;
		}
		if(count!=1)
		{
			temp[count1]=cut;
			count1++;
		}
		n=0;	
	}
	
}
void George::output()
{	
	if (count1>=1){
	cout<<"Palindrome in string: ";
	for (int i=0;i<count1;i++){
		cout<<temp[i]<<" ";
	}
}
	else
	cout <<"No palindrome in string";
}
