#include <iostream>
#include <string>

using namespace std;

class George{
	
public:
	string str1;
	int len;
	void process();
};

int main()
{
	George a;
	a.process();
	return 0;
}
void George::process()
{
	cout<<"Enter string: ";
	getline(cin,str1);
	len=str1.length();
	for(int i=0;i<len;i++){
		int count=1;
		while(i<len-1 && str1[i]==str1[i+1]){
			count++;
			i++;
		}
		cout<<str1[i]<<count;
	}
}
