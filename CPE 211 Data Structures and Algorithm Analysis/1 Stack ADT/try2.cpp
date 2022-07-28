#include <iostream>
using namespace std;
int top=-1,n, *arr;
class Stack{
	public:
		bool isFull();
		bool isEmpty();
		void push(int value);
		void pop();
		void display();
		void reverse();		
};
bool Stack::isFull()
{
	if(top>=n-1)
	return true;
	else
	return false;
}
bool Stack::isEmpty(){
	if(top==-1)
	return true;
	else 
	return false;
}
void Stack::push(int value)
{
	if(isFull())
	{
		cout<<"Stack Overflow"<<endl;
	}
	else
	{
		top++;
		arr[top]=value;
		cout<<value<<" pushed"<<endl;
	}
}
void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack Underflow"<<endl;
	}
	else{
		cout<<arr[top]<<" popped"<<endl;
		top--;
	}
}

void Stack::display()
{
	cout<<"Items inside the Stack are:"<<endl;
	for(int i=top;i>=0;i--)
	{
		cout<<"\t"<<arr[i]<<endl;
	}
}

void Stack::reverse(){
	cout<<"stack reversed"<<endl;
	int i,j,temp;
		i=0; 
   		 j=top;  	   
	while(i<j && j>i)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(i=top;i>=0;i--)
	{
		cout<<"\t"<<arr[i]<<endl;
	}
}

int main()
{
	int val,option;
	Stack s;
	cout<<"Enter n size of stack"<<endl;
	cin>>n;
	arr= new int[n];
	do{
			cout<<endl<<"Enter option"<<endl;
			cout<<"[1] Push()"<<endl;
			cout<<"[2] Pop()"<<endl;
			cout<<"[3] Display()"<<endl;
			cin>>option;
			switch(option)
			{
				case 0:{
					break;
				}
				case 1:{
					cout<<"Enter value to be pushed"<<endl;
					cin>>val;
					s.push(val);
					break;
				}
				case 2:{
					s.pop();
					break;
				}
				case 3:{
					s.display();
					break;
				}
				case 4: {
					s.reverse();
					break;
				}
				default: {
					cout<<"Invalid option"<<endl;
				}
			}
	}while(option!=0);
	delete[]arr;
	return 0;
}
