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
	cout<<"Enter String: ";
	cin>> x;
    int count = 0;
	string xCopy=x;
    sort(x.begin(), x.end());
    while(next_permutation(x.begin(), x.end()))
    {
       	if(x!=xCopy)
        count++;
        cout << x << ' ';
	}
    cout<<count<<endl;
    
}

int main(){
	George a;
	a.process();
	
}
