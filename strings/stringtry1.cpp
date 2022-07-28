#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

class Hey{
	public:
		char arr[100], rev[100], *input;
		int x,y,sum,i,count, rs=0,max=0,rem;
		void input();
		void process();
		void reverse();
};
int main (int argc, char** argv){
		Hey a;
		a.input();
		a.process();
		a.rev();
		return 0;
}
void Hey::input(){
	cin.getline(arr,100); 
}
void Hey::process(){
	input=strtok(arr," ");
	while(input!=NULL){
		strcpy(rev,input);
		a=atoi(rev);
		count=0;
		for(i=1;i<a;i++){
			if(a%i==0)count++;		//determine if prime
		}
		if(count<=1){
			if(a>max) max=a;			
		}
		point=strtok(NULL," ");
	}
	cout<<"Largest prime: "<<max<<endl;
	}
void Hey::reverse(){
	for(;max!=0;){
			rem=max%10;
			max/=10;
			rs=rs*10+rem;
		}
		cout<<"REVERSE OF THE LARGEST PRIME: "<<rs<<endl;
	
}
}
