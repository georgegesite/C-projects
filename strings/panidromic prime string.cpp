#include <iostream>
#include <sstream>
using namespace std;

int main()
{	int top=-1,size=0;
	string str;	
	string arr[100];
	cout<<"Enter String: ";
	getline(cin,str);
	string cut;
		 	stringstream ss(str);
		 	while(ss>>cut)
		 	{
		 		int c= cut.length();
		 		int count =0,m=0,flag=0;
		 		for (int i=0;i<c;i++)
		 		{
		 			if (cut[i]!=cut[c-i-1])
					count++;
					break;
				 }
				  m=c/2;
				 for( int j=2;j<=m;j++)
				 {
				 	if(c%j==0)
				 	{
				 		flag=1;
					 }
				 }
				 if (count!=1 && flag==0) {
				 	top++;
				 	size++;
				 	arr[top]=cut;
				 }	 
			 }
			 for (int i=0;i<size;i++ )
			 {
			 	cout<<arr[i]<<" ";
			 }
}

