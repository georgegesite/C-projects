#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string word, sent[100], temp1;
	int len, count=0,num[100], temp,count1=0;
	
	getline(cin, word);
	len = word.length();
	
	for(int i=0;i<len;i++)
	{
		if (word[i]!= ' ')
		{
			sent[count]+=word[i];
			count1++;
			num[count]=count1;	
		}
		else if(word[i]==' '&&word[i+1]!=' ')
		{
			count++;
			count1=0;
		}
	}
	
		for(int i=0;i<=count;i++){
			for(int j=i+1;j<=count;j++)
			{
				if(num[i]>num[j])
				{
					temp=num[i];
					temp1=sent[i];
					num[i]= num[j];
					sent[i]=sent[j];
					num[j]=temp;
					sent[j]=temp1;
				}
			}
		}
		for(int i=0;i<=count;i++)
		{
			cout<<sent[i]<< " ";
		}
		return 0;
}
