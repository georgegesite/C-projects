#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class george{
	public:
	int m = X.length(), n = Y.length();
	string X,Y;
	void LCS();
	void input();
};

int main()
{
	george a;
	a.input();
	 a.LCS();
	return 0;
}
void george::input(){
	cout<<"Enter string 1: ";
	cin>>X;
	cout<<"Enter string 2: ";
	cin>>Y;
}

void george::LCS()
{
	int maxlen = 0;			
	int endingIndex = m;	
	int lookup[m + 1][n + 1];
	memset(lookup, 0, sizeof(lookup));
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			if (X[i - 1] == Y[j - 1]){
				lookup[i][j] = lookup[i - 1][j - 1] + 1;
				
				if (lookup[i][j] > maxlen){
					maxlen = lookup[i][j];
					endingIndex = i;
				}
			}
		}
	}
	
	cout<< X.substr(endingIndex - maxlen, maxlen);
}
