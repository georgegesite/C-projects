#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str_to_search, str;
	cout << "Please enter the string to search: \n";
	getline(cin, str_to_search);
	cout << "Enter the substring to find: \n";
	getline(cin, str);
	int count = 0;
	int nPos = str_to_search.find(str, 0);

	while (nPos != string::npos)
{
		count++;
	nPos = str_to_search.find(str, nPos + str.size());
}
	cout << "There is a total of "<< count << endl;
	system("pause");
	return 0;
}
