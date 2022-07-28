#include <iostream>
#include <sstream>
using namespace std;

class Stack{

	public:	
		int top=-1,size=0;
		string str,arr[100];	
 		
		 void input(){
 			//enter sentence
 			cout<<"Input: ";
		getline(cin,str);
		 }
		 	//also get palindrome whose length is prime
 			// if word == panidrome and prime, count ++
 			//count will be the size of the stack
 			//terminate if no words  to be pushed or popped
		 void getpalindromeprime()				
		 {		 	
		 	string cut;
		 	stringstream ss(str);
		 	while(ss>>cut)
		 	{
		 		int c= cut.length() 
		 		int count =0,count1=0,m=0,flag=0;
		 		for (int i=0;i<c;i++) // check for palindrome
		 		{
		 			if (cut[i]!=cut[c-i-1])
					count++;
					break;
				 }
				 m=c/2;
				 for( int j=2;j<=m;j++)//check for prime
				 {
				 	if(c%j==0)
				 	{
				 		flag=1;
					 }
				 }
				 if (count!=1 && flag==0)//enter palindromic prime string to stack
				 {
				 	top++;
				 	size++;
				 	arr[top]=cut;
				 	 }
			 }	
		 }
 		bool isEmpty()
 		{
 			if(top>=size-1)
			return true;
			else
			return false;
		}
		 bool isFull()
		 {
		 	if(top==-1)
			return true;
			else
			return false;
		 }
		 void push(int val)
		 {
		 	if(isFull())
			 {
   	 		cout<<"Stack Overflow"<<endl;
   			}
   			else {
      		top++;
      		arr[top]=val;
       		cout<<"Inserted data "<<val<<endl;
   				}		
		 }
		 void pop()
		 {
		 	if(isEmpty())
			 {
   			 cout<<"Stack Underflow"<<endl;
  			 }
  			 else {
      		cout<<"The popped element is "<< arr[top] <<endl;
     		 top--;
		 			}
		 void display()
		 {
		 	for(int i=top; i>=0; i--)
	 		 {
      		cout<<"\t"<<arr[i]<<endl;
			  }
		 }
		 void topstack ()
		 {
		 	if(isEmpty())
			 	{
   	 			cout<<"Stack is Empty"<<endl;
  		 		}
  			 else
  				 {
   			cout<<"Top of stack is "<<arr[top]<<endl;
  				 }
		 }
		 void bottomstack()
		 {
		 	if(isEmpty())
			{
		cout<<"Stack is Empty"<<endl;
			}
			else
			{
				int bot=0;
		cout<<"Bottom of the stack is "<<arr[bot]<<endl;
			}
		 }
};

int main()
{	
	Stack s;
	s.input();
	s.getpalindromeprime();
	int op,value;
	do {
   	cout<<endl<<"Stack options: "<<endl;
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Top()"<<endl;
 		cout<<"[4] Bottom()"<<endl;
 		cout<<"[5] Reverse()"<<endl;
      cout<<endl<<"Enter Option: "<<endl;
      cin>>op;
      switch(op) {
      	case 0:{
			break;
		  }
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            s.push(value);
            break;
         }
         case 2: {
            s.pop();
            break;
         }  
         case 3: {	
		 	s.display()
			break;
		 }	 
         case 4: {
            s.topstack();
            break;
         }
        case 5: {
            s.bottomstack();
            break;
         }  
         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
   }while(op!=0);
return 0;

}

