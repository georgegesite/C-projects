#include <iostream>
#include <string>
using namespace std;

class George{
public:

    void CheckPalindrome(string str)
    {
        int c = str.length();
        int count = 0;
        for (int i=0; i< c;i++) // check for palindrome
		 		{
		 			if (str[i]!=str[c-i-1])
		 			{
		 					count++;
		 					break;
					 }	
				 }
        if(count!=1)
        {
            cout<<"String is a palindrome";
        }
        else
        {
            cout<<"No";
        }
        
    }

        
};

int main()
{
    string str;
    str = "jashdfjhasjfhasf";
    George a;
    a.CheckPalindrome(str);
    return 0;
}