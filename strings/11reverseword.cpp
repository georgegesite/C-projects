#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void reverse(string str)  
{  
    if(str.size() == 0) 
    { 
        return; 
    } 
    reverse(str.substr(1)); 
    cout << str[0]; 
}  
  
/* Driver program to test above function */
int main()  
{  
    string a;
    getline(cin,a);
    reverse(a);  
    return 0;  
}  
  

