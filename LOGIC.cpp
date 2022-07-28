#include <iostream>
#include <string.h>

using namespace std;

class Logic {
	public:
		string p,q;
		int num;
		void input();
		void implementation();
};

int main(){
	Logic a;
	a.input();
	a.implementation();
	return 0;
}

void Logic::input(){
	cout << "Enter 1 for Conjunction" <<endl << "Enter 2 for Disjunction" << endl << "Enter 3 for Negation" << endl << "Enter 4 for Conditional" << endl << "Enter 5 for Biconditional" << endl;
	cin >> num;
	
}

void Logic::implementation(){
	if (num==1){
	
			cout << "\nConjunction.";
		cout<< "\nEnter the value of p:";
		cin>>p;
		cout<<"	Enter the value of q:";
		cin>>q;
		
		if( q == "true" && p =="true" )
		 {
			cout<<"\n p ^ q = true";
		}
		
		else cout<< ("\n	 p ^ q = false");
	}
	if (num==2)
	{
		
    cout << "\n Disjunction.";
		cout<< "\nEnter the value of p	";
		cin>>p;
		cout<<"	Enter the value of q	";
		cin>>q;
		
		if( q == "false" && p =="false")
		 {
			cout<<"\n p or q = false";
		}
		
		else cout<< ("\n	 p or q = true");
	}

	if(num==3)
	{
			cout<<"\nNegation." << endl << "Enter q:";
			cin>>q;
			
			if(q=="true") cout << "\nq= false";
			else cout<<"\n q=true";	
	}
	if (num==4)
	{
			cout<<"\nConditional.";
			cout<< "\nEnter the value of p	";
			cin>>p;
			cout<<"Enter the value of q	";
			cin>>q;
			
			if(p=="true" && q=="false") 
			
			cout <<"q-->p is false";
			else  cout << "\nq-->p is true";
		
	}
	if (num==5)
	{
		cout<<"\nBiconditional.";
			cout<< "\nEnter the value of p	";
			cin>>p;
			cout<<"Enter the value of q	";
			cin>>q;
			
			if((p=="true" && q=="true")||(p=="false" && q=="false"))
			cout << "\np<-->q is true ";
			else 
			cout << "\np<-->q is false ";
	}
}
