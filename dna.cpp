#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >>size;
	int *a = new int(size); // declarea a pointer variable
	for (int i=0; i<size;i++){
		cin >> a[i];		// pass size
	}
	for (int i=0;i<size;i++){
		cout << a[i];
	}
	delete (a);				// delete array
	return 0;
}
