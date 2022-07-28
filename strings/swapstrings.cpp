#include <iostream>
using namespace std;
void swap(char *str1, char *str2) 
{ 
  char *temp = str1; 
  str1 = str2; 
  str2 = temp; 
}   
   
int main() 
{ 
  char *str1 = "geeks"; 
  char *str2 = "forgeeks"; 
  swap(str1, str2); 
cout << "Str1 is: " << str1 <<"Str2 is: " <<str2;
  getchar(); 
  return 0; 
} 
