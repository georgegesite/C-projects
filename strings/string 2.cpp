#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Enter Name";
	getline (cin, name);
	name.pop_back();
	cout << name << endl;
}
