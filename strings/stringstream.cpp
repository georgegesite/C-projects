#include <iostream>
#include <bits/stdc++.h> 
#include <string>
using namespace std; 
   	string arr[100],temp;
   	
int countWords(string str) 
{ 
    // breaking input into word using string stream 
    stringstream s(str); // Used for breaking words 
    string word; // to store individual words 
 
    int count = 0; 
    while (s >> word) {
	arr[count]=word;
        count++; 
    }
    return count; 
} 
  
// Driver code 
int main() 
{ 
    string s = "geeks for geeks geeks "
               "contribution placements"; 
    cout << " Number of words are: " << countWords(s); 
  
    for(int i=0;i<countWords(s);i++)
    {
    	for(int j =i+1;j<countWords(s);j++){
    		if(arr[i] < arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
    		
	}
	for(int i=0;i<countWords(s);i++){
		
		cout << arr[i] << " ";
	}
	
    return 0; 
} 
