/*
 *	ASSIGNMENT ONE
 *	STACK
 *	GEORGE GESITE
 *	BSCpE-2A	
 */
  
#include <iostream>
#include <string>

using namespace std;

class STACK{
	public:
		int n=50,top=-1,arr[50];
		
	
	 bool isEmpty();
	 bool isFull();
	 void push(int value);
	 int pop();
	 int topstack();
	 int bottom();
	 void display();
	 
};

bool STACK::isEmpty()
{
	if(top<=-1)
		return true;
		else
		return false;
}
bool STACK::isFull()
{
	if(top>=n-1)
		return true;
		else 
		return false;
}

void STACK::push(int val)
{
	if(isFull())
		{
			cout<<"stack overflow"<<endl;
		 } 
		 else
		 {
		 	top++;
		 	arr[top]=val;
		 	cout<<"Inserted data"<< val<<endl;
		 }
}

int STACK::pop()
{
	if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return 0;
		}
		else
		{
			int popValue =arr[top];
			arr[top]=0;
			top--;
			return popValue;
		}
}

int STACK::topstack()
{
	if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return 0;
		}
	else
		{
			return arr[top];
		}
}

int STACK::bottom()
{
	if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return 0;
		}
	else
	{
		return arr[0];
	}
}

void STACK::display()
	{
		cout<<"All values in the stack are "<<endl;
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
int main(int argc, char** argv)
{
	int position, value, option;
	STACK stack;
	stack.pop();
	stack.push(value);
	stack.topstack();
	stack.bottom();
	stack.display();
	do
		cout<<"Stack options: "<<endl;
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Top()"<<endl;
 		cout<<"[4] Bottom()"<<endl;
 		cout<<"[5] Reverse()"<<endl;
 		
 		cin>>option;
 		switch(option)
		   {
 			case0:
 				break;
 			case1:
 				cout<<"Enter an item to push in the stack"<<endl;
 				cin>>value;
 				stack.push(value);
 				break;
 			case2:
 				cout<<"Pop Function called - popped value: "<<stack.pop()<<endl;
 				break;
 			case3:
 				cout<<"Top of the stack is: "<<stack.topstack()<<endl;
 				break;
 			case4:
 				cout<<"Bottom of the stack is: "<<stack.bottom()<<endl;
 			case5:
				cout<<"display function is called"<<endl;
				stack.display();
				break;	
 			default:
 				cout<<"Enter proper option"<<endl;
 			}
	}
	 while(option!=0);
 	return 0;
		
}

