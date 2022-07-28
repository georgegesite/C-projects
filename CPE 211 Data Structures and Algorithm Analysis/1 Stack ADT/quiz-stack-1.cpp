#include <sstream>
 #include <iostream>
 using namespace std;
 	int size=0,top =-1;
 	string str, stack[100];
 class STACK{
 	public:	
	 	void input();
		void getpalindromeprime();		
 		bool isFull();
 		bool isEmpty();
 		void push(string value);
 		void pop();
 		void topstack();
 		void bottomstack();
 		void display();
 };
 
 void STACK::input()
 {
 	cout<<"Input: ";
	getline(cin,str);
 }
 void STACK::getpalindromeprime()	
 {
 	string cut;
		 	stringstream ss(str);
		 	while(ss>>cut)
		 	{
		 		int c= cut.length();
		 		int count =0,m=0,flag=0;
		 		m=c/2;
				 for( int j=2;j<=m;j++)//check for prime
				 {
				 	if(c%j==0)
				 	{
				 		flag=1;
					 }
				 }
		 		for (int i=0;i<c;i++) // check for palindrome
		 		{
		 			if (cut[i]!=cut[c-i-1])
		 			{
		 					count++;
		 					break;
					 }	
				 }
				 
				 
				 if (count!=1 && flag==0)//enter palindromic prime string to stack
				 {
				 	top++;
				 	size++;
				 	stack[top]=cut;
				 	 }
			 }
			 cout<<"Palindromic Prime word(s): "<<endl;	
			 for(int i=0;i<size;i++)
			 {
			 	cout<<stack[i]<<" "<<endl;
			 }
			 cout<<"Size of stack: "<<size<<endl;
 }
 bool STACK::isFull()
 {
 	if(top>=size-1)
	return true;
	else
	return false;
 }
 bool STACK::isEmpty()
 {
 	if(top==-1)
	return true;
	else
	return false;
 }
 void STACK::push(string val)
 {
 	if(isFull()){
   	 cout<<"Stack Overflow"<<endl;
   }
   else {
      top++;
      stack[top]=val;
       cout<<"Inserted data "<<val<<endl;
   }
 }
 void STACK::pop()
 {	
 	 if(isEmpty()){
   	 cout<<"Stack Underflow"<<endl;
   }
  
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
      size--;
   }
 }
 void STACK::topstack()
 {
 	if(isEmpty()){
   	 cout<<"Stack is Empty"<<endl;
   }
   else
   {
   	cout<<"Top of stack is "<<stack[top]<<endl;
   }
 }
 void STACK::bottomstack()
 {
 	if(isEmpty())
	{
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		int bot=0;
		cout<<"Bottom of the stack is "<<stack[bot]<<endl;
	}
 }
 void STACK::display()
 {
      cout<<"Stack"<<endl;
    	for(int i=top; i>=0; i--)
	  {
      	cout<<"\t"<<stack[i]<<endl;
	  }
		}
 
 
 int main()
 {
 	int op;
 	string value;
 	STACK s;
 	s.input();
 	s.getpalindromeprime();
 	cout<<endl<<"Stack options: "<<endl;
   
   	do {
   	
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Top()"<<endl;
 		cout<<"[4] Bottom()"<<endl;
 		cout<<"[5] Display()"<<endl;
      cout<<endl<<"Enter Option: "<<endl;
      cin>>op;
      switch(op) {
      	case 0:{
			break;
		  }
         case 1: {
         	size++;
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
            s.topstack();
            break;
         }
        case 4: {
            s.bottomstack();
            break;
         }
		 case 5: {	
		 	s.display();
			break;
		 }	 
        
         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
   }while(op!=0);
   return 0;
 }
