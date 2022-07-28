#include <iostream>
#include <string.h>

using namespace std;

void Wtf (char x);

class Hello
{
	public:
	string name; //data members
	int x,y,z; //data members
};

int main()
{
	int x;
	Wtf (x);
}
void Wtf (char x)
{
	Hello me;
	me.x = 1;
	me.y = 3;
	me.z = me.x+me.y;
	me.name = "George";
	
	cout << me.z << " goals, " << me.name.length() <<endl;
}
