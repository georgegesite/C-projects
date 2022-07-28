#include <iostream>
#include <string.h>

using namespace std;

void input(char *x);
void buwag(char *x);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[100];
	
	input (str);
	buwag (str);
	return 0;
}
void input(char *x){
	cout<<"Enter String: ";
	gets(x);
}
void buwag(char *x){
	char* piece = strtok(x, " ");
	int length;
	while(piece != NULL){
		length=strlen(piece)/strlen(x);
		sort(piece, length);
		printArraystring(piece, length); 
		piece=strtok(NULL, " ");
	}
}
