#include<iostream>
#include<string.h>
using namespace std;


string fun_xor(string a,string b, int len_gen)
	{
		string result="";
		if(a[0]=='0')
		return a.substr(1);
		else
		{
			for(int i=0;i<len_gen;i++)
			{
				result=result+(a[i]==b[i]?'0':'1');
			}
			
			return result.substr(1);
		}
	}
	void  modulo_div(string divisor,string divident, int len_gen, int len_divident, string result, string input )
	{

		string temp_div = divisor;
		string temp_divident=divident.substr(0,len_gen);
		int j=len_gen;
		while(j<len_divident)
		{
			temp_divident=fun_xor(temp_divident,temp_div,len_gen);
			temp_divident=temp_divident+divident[j];
			j++;
		}
		result=input+fun_xor(temp_divident, temp_div,len_gen);	
	}
	void getdata(string input, string divisor,int len_gen, string divident, int len_inp, int len_divident, string result)
	{
		
		cout<<"\nEnter Input: ";
		cin>> input;
		cout<<"\nEnter coefficients of generator polynomial: ";
		cin>> divisor;
		cout<< input<<"and"<< divisor<<endl;
		
		len_gen=divisor.length();
		len_inp=input.length();
		divident=input;
		int r=len_gen-1;
		for(int i=0;i<r;i++)
		{
			divident=divident+'0';		
		}
		len_divident=divident.length();
		modulo_div(divisor, divident, len_gen, len_divident, result, input);
		
		
		
	}
	void sender_side(string input, string divisor, string divident, string result)
	{
		cout<<"Input: "<<input<<"\n";
		cout<<"Polynomial: "<<divisor<<"\n";
		cout<<"Divident: "<<divident<<"\n";
		cout<<"Data to send: "<<result<<"\n";
		
	}
	void receiver_side(string divisor, int len_gen)
	{
		string data_rec;
		cout<<"\nEnter Data Received: ";
		cin>>data_rec;

		string temp_div=divisor;
		string temp_divident=data_rec.substr(0,len_gen);
		int j=len_gen;
		while(j<data_rec.length())
		{
			temp_divident=fun_xor(temp_divident,temp_div,len_gen);
			temp_divident=temp_divident+data_rec[j];
			j++;
		}
		string error=fun_xor(temp_divident, temp_div, len_gen);
		cout<<"reminder is: "<<error;

		bool flag=0;
		for(int i=0;i<len_gen-1;i++)
		{
			if(error[i]=='1')
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"\nCorrect Data Received Without Any Error";
		else
		cout<<"\nData Received Contain Some  Error";
			
		
		
	}


int main() {
// TODO Auto-generated method stub

	string input,divisor,divident,result;
	int len_divident, len_gen, len_inp;

	getdata(input, divisor,len_gen, divident, len_inp,len_divident, result);
	sender_side(input, divisor, divident, result);
	receiver_side(divisor, len_gen);
	return 0;

}
	