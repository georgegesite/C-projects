#include <iostream>
using namespace std;

int main()
{
	int size,i;
	cin >> size;
	int *a = new int (size);
	for (i=0;i<size;i++)
	{
		cin >> a[i];
		}	
		for (i=0;i<size;i++)
		{
			cout << a[i];
		}
		delete (a);
		return 0;
}
