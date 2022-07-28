
#include <iostream>
#include <conio.h>
using namespace std;
int  n, top=-1; 
int *stack;

bool isFull()
{
	if(top>=n-1)
	return true;
	else
	return false;
}

bool isEmpty()
{
	if(top==-1)
	return true;
	else
	return false;
}
 
void push(int val) {
   if(isFull()){
   	 cout<<"Stack Overflow"<<endl;
   }
   else {
      top++;
      stack[top]=val;
       cout<<"Inserted data "<<val<<endl;
   }
}
void pop() {
   if(isEmpty()){
   	 cout<<"Stack Underflow"<<endl;
   }
  
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void topstack()
{
	if(isEmpty()){
   	 cout<<"Stack is Empty"<<endl;
   }
   else
   {
   	cout<<"Top of stack is "<<stack[top]<<endl;
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
		cout<<"Bottom of the stack is "<<stack[bot]<<endl;
	}
}
void reverse()
{
	if(isEmpty())
   {
   	cout<<"Stack is Empty"<<endl;
	}   
   else{
	int i,j,temp;
   		i=0; 
   		 j=top;  	   
	while(i<j && j>i)
	{
		temp=stack[i];
		stack[i]=stack[j];
		stack[j]=temp;
		i++;
		j--;
	}
      cout<<endl<<"Stack Reversed"<<endl;
    	for(int i=top; i>=0; i--)
	  {
      	cout<<stack[i]<<endl;
	  }
}}

void display() 
{
   if(isEmpty())
   {
   	cout<<"Stack is Empty"<<endl;
	}   
   else{
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
	  {
      	cout<<stack[i]<<endl;
	  }
      
   } 
   
}
int main() {
	cout<<"Enter n number of inputs(size of stack): ";
	cin>>n;
	stack=new int[n];
   int op, val;
   cout<<"Stack options: "<<endl;
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Top()"<<endl;
 		cout<<"[4] Bottom()"<<endl;
 		cout<<"[5] Reverse()"<<endl;
 		cout<<"[6] Display()"<<endl;
   do {
      cout<<endl<<"Enter Option: "<<endl;
      cin>>op;
      switch(op) {
      	case 0:{
			break;
		  }
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }  
         case 3: {
            topstack();
            break;
         }
        case 4: {
            bottomstack();
            break;
         }
		 case 5: {	
		 	reverse();
			break;
		 }	 
         case 6: {
            display();
            break;
         }
         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
   }while(op!=0);
   delete[]stack;
   return 0;
}
