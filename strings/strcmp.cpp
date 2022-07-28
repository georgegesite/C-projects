#include<stdio.h> 
#include<string.h> 
  
int main() 
{  
      
    char leftStr[10]; 
    char rightStr[10];
      
    printf ("Enter p:");
    scanf ("%s", leftStr);
    printf ("Enter q:");
    scanf ("%s", rightStr);
    // Using strcmp() 
    int res = strcmp(leftStr, rightStr); 
      
    if (res==0) 
        printf("P and Q = T"); 
    else 
        printf("P and Q = F"); 
    return 0; 
} 
