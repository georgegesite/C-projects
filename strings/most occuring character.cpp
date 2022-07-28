//How to find the maximum occurring character in given String?

#include <iostream>

using namespace std;

char FindmostRepeated(const char *pstr)
{
	if(pstr == NULL)
	return 0;
	
	int count[256] = {0};
	int max = 0;
	int m =0;
	
	while(*pstr)
	{
		if(++count[*pstr]>max){
			max = count[*pstr];
			m = *pstr;
		}
		
		pstr++;
	}
	return m;
}


int main ()
{
	const char str[] = "Georgegesite";
	
	char result = FindmostRepeated(str);
	cout<<result;
	return 0;
}
