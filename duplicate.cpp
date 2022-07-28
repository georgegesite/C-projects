#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std; 
  
void printDuplicates(vector<string> words) 
{ 
    vector<string>duplicate; 
  
    // STL function to sort the array of string 
    sort(words.begin(), words.end()); 
  
    for (int i = 1; i<words.size(); i++) 
        if (words[i-1] == words[i]) 
  
            // STL function to push the duplicate 
            // words in a new vector string 
            duplicate.push_back(words[i]); 
  
    int i = 0; 
    for (i = 0; i<duplicate.size(); i++) 
            cout << duplicate[i] << endl; 
  
    if (i == 0) 
        cout << "No Duplicate words" << endl; 
} 
  
// Driver code 
int main() 
{ 
    vector<string>words{ "welcome", "to", "geeks", 
                                  "for", "geeks" }; 
    printDuplicates(words); 
    return 0; 
} 
