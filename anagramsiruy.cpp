#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;
void anagram(string x);
bool isAnagram(string x, string y);


bool isAnagram(string x, string y){
	istringstream ss(x);
string piece;
	while (ss>>piece)
		{
		if(piece==y) 
		return true;
		}
	return false;
}




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string put, word;
	for(;;){
		cout<<"Input string: ";
		getline(cin, put);
		cout<<"Input word: ";
		getline(cin, word);
		cout<<"The anagram of "<<word<<": ";
		bool result=isAnagram(put, word);
		if(result==true){
		anagram(word);
		break;
		}
		cout<<"\n\nInvalid word. Please try again.\n"<<endl;
	}
	return 0;
}

