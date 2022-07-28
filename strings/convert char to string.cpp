#include <iostream>
#include <string>

int main()
{
	char c;
	gets(c,100);

	// using string::push_back

	std::string s;
	s.push_back(c);
	std::cout << s << '\n';

	return 0;
}
