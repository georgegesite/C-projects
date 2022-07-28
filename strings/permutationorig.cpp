#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

class George{
	public:
		string x;
		void process();
};

void George::process(){
		cin>> x;
	string xCopy=x;
    sort(x.begin(), x.end());
    while(next_permutation(x.begin(), x.end()))
    {
       	if(x!=xCopy)
        cout << x << ' ';
	}
	
    
}

int main(){
	George a;
	a.process();

}
