#include <iostream>
#include <cstring>
#include <algorithm>
#include "george.h"

using namespace std;

void Substr::input(){
	cout<<"Input string 1: ";
	cin>>put;
	cout<<"Input string 2: ";
	cin>>word;
	cout<<"Output: ";
}

void Substr::inspect(){
	i=0;
	j=word.length();
	while(i<word.length()){
		find1=word.substr(i, word.length()); 
		find2=word.substr(0, j);
		i++;
		j--; 
		store();
	}
	output();
}

void Substr::store(){
	findstr=put.find(find1, 0);
	if(findstr>=0){
		found[k]=find1; 
		k++;
	}
	findstr=put.find(find2, 0);
	if(findstr>=0){
		found[k]=find2; 
		k++;
	}
}

void Substr::output(){
	for(i=0;i<k;i++){
		if(found[i].length()>max){
			max=found[i].length();
			maxword=found[i];
		}
	}
	cout<<maxword;
}
