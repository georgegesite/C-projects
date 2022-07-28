#include<iostream>            
#include<string.h>
#include<math.h>
void getString(char* x); // get input
void processString(char* x);

main()
{
     char str[100]; 

     getString(str);
     processString(str);
} 

void getString(char * x){
     std::cout<<"Inputs: ";
     gets(x);//scans input
}

void processString(char *x)
	{
     char* piece=strtok(x, " "); //breaks input with "spacebar"
     char temp, reverse[100];	
     int length, i, j, c, sum, count;

     while(piece!=NULL)
	 	{ 
          length=strlen(piece);//counts number of characters
          strcpy(reverse, piece); //copy string from str array to reverse array strcpy(array, source);
          for(i=0,j=length-1;i<j&&j>i;i++,j--)
		  	{
              temp=reverse[i];
              reverse[i]=reverse[j];
              reverse[j]=temp; 
             } 
          c=0;
          for(i=0;i<length;i++)
		  	{
              if(reverse[i]==piece[i])
			  {
			  	c++; 
              	reverse[i]='\0';// \0 is termination/null
			  }
          	}
          if(c==length)
		  	{ 
              count=0; 
			  sum=0;
              for(i=length-1;i>=0;i--)
			  	{
                  if(piece[i]=='1')
				  {
                      sum+=pow(2,count);
                  } 
				  count++;
              	} 
			  count=0; 
              for(i=1;i<sum;i++)
			  	{
                  if(sum%i==0) count++;
              	} 
              if(count<=1) 
			  std::cout<<"Hello, "<<piece<<" is a palindromic prime.\0" <<std::endl;
          	}	
          piece=strtok(NULL, " "); 
     } 
}
