
// Simple C++ program to count occurrences 
// of pat in txt. 
#include<bits/stdc++.h> 
using namespace std; 
   
int countFreq(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int count = 0; 
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           count++; 
           j = 0; 
        } 
    } 
    return count; 
} 
    
/* Driver program to test above function */
int main() 
{ 
   string txt;
   string pat;
   cout<<"Enter string: ";
   getline(cin,txt);
   cout<<"enter word: ";
   getline(cin,pat);
   cout << countFreq(pat, txt); 
   return 0; 
} 
