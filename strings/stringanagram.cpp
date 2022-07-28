#include <iostream>
#include <string.h>

using namespace std;

void breakString (char *x, char *y);

char s1[100], s2[100];

int main()
{
	cout << "INPUT STRINGS: ";
	gets(s1);
	cout << "INPUT WORD: ";
	gets(s2);
	breakString(s1,s2);
	return 0;
}

void breakString(char *x,char *y){
	char *word = strtok(x, " ");
	int count, count2=0;
	
	while(word!=NULL){
		count = 0;
		if(strlen(word)==strlen(y)){
			for(int i=0;i<strlen(word);i++){
				for (int j=0;j<strlen(y);j++)
				{
					if(word[i]==y[j])
					count++;
				}
			}
			if (count==strlen(y)&&strcmp(word, y)!=0){
				count2++;
				if(count2==1)
			cout << "The anagram off "<< y <<"; ";
			cout << word << "  ";
			}
		}
		word = strtok (NULL, " ");
		
	}
}
