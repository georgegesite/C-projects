#include <iostream>
#include <string.h>

using namespace std;

void input(char *x);
void printArraystring(string str[], int n);
void buwag(char *x);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char word[100];
	
	input(word);
	buwag(word);
	
	return 0;
}

void input(char *x){
	cout<<"Enter String: ";
	gets(x);
} 
void buwag(char *x){
	int index,length;
	char* piece = strtok(x, " ");
	while(piece != NULL){
		length = strlen(piece);
		cout<<piece[0];
		cout<<piece;
		cout<<piece[length-1] << " ";
		piece = strtok(NULL, " ");
	}
}





