#include<iostream>
#include<string.h>
#include<conio.h>
#include <sstream>

using namespace std;

long binary(long num);
long check_prime(long num);
long is_palindrome(string s);
main()
{
	char stringbinary_string;
	char stringbinary_numbers[100];
	int count=0;
	int number;


	
	cout<< "Enter binary numbers ";
	getline(cin, stringbinary_string);
	
	for(int a=0; a<binary_string.length(); a++){
		if(binary_string[a]!=' '){
			binary_numbers[count]+=binary_string[a];
		}
		else count++;
	}
	

	

	for(int a=0; a<=count; a++){
		
		stringstream number(binary_numbers[a]);
		
		long num;
		number>>num;
		if(is_palindrome(binary_numbers[a])==1 &&check_prime(binary(num))==1){
			cout<<"\n "<<binary_numbers[a]<< " is  palindromic prime" << "	equivalent decimal is "<<binary(num);
		}
		
		else if(is_palindrome(binary_numbers[a])==0 &&check_prime(binary(num))==1)
			cout<<"\n "<<binary_numbers[a]<< " is  prime but not palindromic" << "	equivalent decimal is "<<binary(num);
			
		else if(is_palindrome(binary_numbers[a])==1 &&check_prime(binary(num))==0)
			cout<<"\n "<<binary_numbers[a]<< " is  palindromic but not prime" << "	equivalent decimal is "<<binary(num);
		
		else
		cout<<"\n "<<binary_numbers[a]<< " is not a palindromic prime" << "	equivalent decimal is "<<binary(num);
		
		cout<<"\n";
	}
	
	

	
	
	
	getch();
}


	// check if palindrome check if palindrome check if palindrome check if palindrome check if palindrome
	long is_palindrome(string s){
		
		strings_reverse; int count=0;
		for(int a=s.length()-1; a>=0; a--){
			s_reverse+=s[a];
		}
		
		for(int a=0; a<s.length(); a++){
			if(s_reverse[a]!=s[a]) count++;
		}
		
		if(count>0) return 0;
		
		
	
		else return 1;
	}
	//  binary to decimall binary to decimall binary to decimall binary to decimall binary to decimall binary to decimall
	long binary(long num){
	
	long decimal_val=0, base=1, rem;
	
	while(num>0){
		rem=num%10;
		decimal_val = decimal_val + rem * base;
		num=num / 10;
		base = base * 2;
	}
	
	return decimal_val;
	
	}
	
	
	//check if prime functioncheck if prime functioncheck if prime functioncheck if prime functioncheck if prime functioncheck if prime function
	long check_prime(long num){
		
		long prime=0;
		
		for(int a=1; a<=num; a++)
		{
			if(num%a==0) prime++;
		}
		
		if(prime==2) return 1;
		
		else return 0;
	}
