#include<bits/stdc++.h> 
#include <iostream>
using namespace std; 
  

// function to print string in sorted order 
void sortString(string &str) 
{ 
	stringstream ss(str);
	string word;
	while(ss >> word){
	
   sort(word.begin(), word.end()); 
   cout << word << " "; 
	} 
}
  
// Driver program to test above function 
int main() 
{ 
    string s;
    getline(cin,s);
    sortString(s);  
    return 0; 
} 
