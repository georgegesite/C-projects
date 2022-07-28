#include <iostream>
using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		Queue()
		{
			front=-1;
			rear = -1;
		}
	bool isEmpty(){
	if(front==-1 && rear==-1)
	return true;
	else 
	return false;
	}
	bool isFull(){
	if(rear==4)
	return true;
	else 
	return false;
	}
	void enqueue(int val)
	{
		if(isFull())
		{
			cout<<"Queue is full"<<endl;
			return;
		}	
		else if(isEmpty())
		{
			rear = front =0;
			arr[rear]=val;
		}
		else{
			rear++;
			arr[rear]=val;
		}	
	}
	int dequeue()
	{
		int x =0;
		if(isEmpty())
		{
				cout<<"Queue is Empty"<<endl;
				return 0;
		}
	
	
		else if (front==rear)
		{
			x=arr[front];
			rear=-1;
			front=-1;
			return 0;
		}
		else{
			x=arr[front];
			arr[front]=0;
			front++;
			return x;
		}
	}
	int count(){
		return(rear-front+1);
	}
	
	void display()
	{
		cout<<"All the values in the Queue are "<<endl;
		for(int i=0;i<=rear;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};

int main()
{
	Queue q1;
	int option, value;
	
	do{
		cout<<endl<<"select operation. Enter 0 to exit."<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear screen()"<<endl;
		
		cin>>option;
		switch (option)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter number to Enqueue in the Queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"Dequeue value is: "<<q1.dequeue()<<endl;
				break;
			case 3:
				if(q1.isEmpty())
				cout<<"Qeueu is  Empty"<<endl;
				else
				cout<<"Qeueu is  not Empty"<<endl;
				break;
			case 4:
				if(q1.isFull())
				cout<<"Qeueu is Full"<<endl;
				else 
				cout<<"Qeueu is not FUll"<<endl;
				break;
			case 5:
				cout<<"Count is:"<<q1.count()<<endl;
				break;
			case 6:
				q1.display();
				break;
			case 7: 
				system("cls");
				break;
			default:
				break;
		}
	}while(option!=0);
	return 0;
}
