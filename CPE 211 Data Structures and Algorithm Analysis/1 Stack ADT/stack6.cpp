/*
 *	ASSIGNMENT ONE
 *	STACK
 *	GEORGE GESITE
 *	BSCpE-2A	
 */
  
#include <iostream>
#include <conio.h>
using namespace std;
int stack[100], n=100, top=-1; 

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
      cout<<"Reverse Stack elements are:"<<endl;
    	for(int i=top; i>=0; i--)
	  {
      	cout<<stack[i]<<endl;
	  }
}

void display() 
{
   if(isEmpty())
   {
   	cout<<"Stack Underflow"<<endl;
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
            cout<<"Inserted data "<<val<<endl;
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
   }while(op!=4);
   return 0;
}
