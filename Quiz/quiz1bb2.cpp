#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

class Hitler{
	public:
	string enter,piece,arr[100],temp;
	int v1,v2;
	int count=0;
	void input();
	void split();
	void output();
};

int main()
{
	Hitler dead;
	dead.input();
	dead.split();
	dead.output();
	return 0;
}

void Hitler::input()
{
	cout<<"Enter String: ";
	getline(cin,enter);
	cout<<"Enter swap number: ";
	cin>>v1>>v2;	
}

void Hitler::split()
{
	stringstream ss(enter);
	while(ss>>piece){
			arr[count]=piece;
			count++;	
	}
	temp=arr[v1-1];
	arr[v1-1]=arr[v2-1];
	arr[v2-1]=temp;
}

void Hitler::output()
{
	cout<<"Output: ";
	for(int i=0;i<count;i++)
	{
		cout <<arr[i]<<" ";
	}
}
