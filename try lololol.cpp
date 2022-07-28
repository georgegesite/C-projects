#include <iostream>
using namespace std;
int top=-1,*arr,n;
class Stack{		
	public:
		bool isEmpty();
		bool isFull();
		void push(int value);
		void pop();
		void display();
};

bool Stack::isEmpty()
{
	if(top==-1)
	return true;
	else 
	return false;
}

bool Stack::isFull()
{
	if(top>=n-1)
	return true;
	else 
	return false;
}
void Stack::push(int value)
{
	if(isFull())
	{
		cout<<"Stack OverFlow"<<endl;
	}
	else
	{
		top++;
		arr[top]=value;
		cout<<value<<" has been pushed"<<endl;
	}
}
void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack UnderFlow"<<endl;
	}
	else
	{
		top--;
		cout<<"Value popped"<<endl;
	}
}

void Stack::display()
{
	for(int i=n;i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int option,val;
	Stack s;
	cout<<"Enter the Size of the Stack: "<<endl;
	cin>>n;
	arr=new int[n];
	cout<<"Enter option"<<endl;
	do{ 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Display()"<<endl;
 		cin>>option;
 		switch(option){
 			case 0:{
			break;
		  }
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            break;
         }  
			 case 3: {
			 	s.display();
				break;
			 }
			 default: {
			 	cout<<"invalid option"<<endl;
				break;
			 }
		 }
		
	}while(option!=0);	
	delete[]arr;
	return 0;
}
