#ifndef GEORGE_H
#define GEORGE_H
#include <iostream>

using namespace std;
class Substr{
	private:
		string put, word, found[50], find1, find2, maxword;
		int i, j, k=0, findstr, max=0;
	public:
		void input();
		void inspect();
		void store();
		void output();
};


#endif
