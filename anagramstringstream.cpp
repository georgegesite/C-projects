#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

void breakString (string str,  string word);

string str,word;

int main()
{
	cout << "INPUT STRINGS: ";
	getline(cin, str);
	cout << "INPUT WORD: ";
	getline(cin,word);
	breakString(str,word);
	return 0;
}

void breakString(string str, string word){
	
	int count, count2=0;
	stringstream ss(str);
	string word2;
	while(ss >> word2 ){
	
		if(word2.length()==word.length()){
			for(int i=0;i<word2.length();i++){
				for (int j=0;j<word.length();j++)
				{
					if(word2[i]==word[j])
					count++;
				}
			}
			if (count==word.length() && word2.compare(word)!=0){
				count2++;
				if(count2==1)
			cout << "The anagram off "<< word <<"; ";
			cout << ss << "  ";
			}
		}
	
		
	}
}
