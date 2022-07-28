#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class substr{
	public:
		char *str[100];
		int len,start=0,high,low;
		
		void input();
		void execute();
		void print();
};

int main(int argc, char** argv) {
	substr a;
	a.input();
	a.execute();
	return 0;
}

void substr::input(){
	cout<<"Enter string: ";
	gets(*str);
}

void execute(){
	 
    int len = strlen(*str);  
  
   
    for (int i = 1; i < len; ++i)  
    {  
       
        high = i;  
        while (low >= 0 && high < len && str[low] == str[high])  
        {  
            if (high - low + 1 > maxLength)  
            {  
                start = low;  
                maxLength = high - low + 1;  
            }  
            --low;  
            ++high;  
        }  

        low = i - 1;  
        high = i + 1;  
        while (low >= 0 && high < len && str[low] == str[high])  
        {  
            if (high - low + 1 > maxLength)  
            {  
                start = low;  
                maxLength = high - low + 1;  
            }  
            --low;  
            ++high;  
        }  
    }  
  	print();
}

void substr::print(){
	 cout<<"Longest palindrome substring is: "; 
	 for( int i = low; i <= high; ++i )  
        cout << str[i];  
}
