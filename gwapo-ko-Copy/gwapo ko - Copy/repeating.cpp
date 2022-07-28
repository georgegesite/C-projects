#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;


   

int main (int argc, char * argv[])

{

char str[100],k,l,m;
char n[100]="01234566789";
int x,y,z,num[10],len,i,j;
gets(str);
len=strlen(str);
for(j=0;j<=9;j++)
{
  num[j]=0;
  for(i=0;i<=len;i++)
    {
      if(str[i]==n[j])
        {
          num[j]++;
        } 
    }
}

for(i=0;i<10;i++)
{
  if(num[i]>3)
    {
      cout<<i<<" repeated "<<num[i]<< " times.\n";
    }
}









 


return EXIT_SUCCESS;

}
