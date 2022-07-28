#include <iostream>
#include <cstring>
#include "lps.h"
using namespace std;



void lps::input(){
	cout<<"Enter string: ";
	cin>>str;
	cout<<"Longest Palindromic string: ";
	execute();	
}


string lps::execute()
{
	 if(str == "")
            return str;
        int n = str.length();
        int m = str.length();
        
        int DP[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i >= j)
                    DP[i][j] = 1;
                else
                    DP[i][j] = 0;
            }
        }
        
        int x,y,mx = INT_MIN;
        for(int j=1;j<m;j++) {
            for(int i=0,k=j;k<m;i++,k++) {
                if(str[i] == str[k] and DP[i+1][k-1] == 1)
                    DP[i][k] = 1;
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i <= j) {
                    if(DP[i][j] == 1 and j-i+1 > mx) {
                        mx = j-i+1;
                        x = i;
                        y = j;
                    }
                }
            }
        }
         final=str.substr(x,y-x+1);
         cout<<final;
}
