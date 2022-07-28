#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


class george{
	private:
		string str1, str2, found[50], find1, find2, maxword;
		int i, j, count=0, num, max=0, m;
	public:
		void input(){
	cout<<"Enter string 1: ";
	cin>>str1;
	cout<<"Enter string 2: ";
	cin>>str2;
	cout<<"Output: ";
		}
		void execute();
		void store();
		void output();
};

int main(int argc, char** argv) {
	george a;
	a.input();
	a.execute();
	return 0;
}



void george::execute(){
	i=0;
	while(i<str2.length()){
		for(m=i;m<str2.length();m++){
			find1=str2.substr(i, m);
			store();
		}
		i++;
	}
	output();
}

void george::store(){
	num=str1.find(find1, 0);
	if(num>=0){
		found[count]=find1; 
		count++;
	}
}

void george::output(){
	for(i=0;i<count;i++){
		if(found[i].length()>max){
			max=found[i].length();
			maxword=found[i];
		}
	}
	cout<<maxword;
}
