#include<iostream>
#include<conio.h>
using namespace std;
int n, front=-1, rear=-1;
int*queue;

bool isFull()
{
	if(rear>=n-1)
	return true;
	else
	return false;
}

bool isEmpty()
{
	if(front==-1 && rear==-1)
	return true;
	else
	return false;
}

void Enqueue(int val)
{
	if(isFull())
	{
	cout<<"Queue is Full!!"<<endl;
	}
	else if(isEmpty())
	{
		rear=0;
		front=0;
		queue[rear]=val;
	}
	else
	{
		rear++;
		queue[rear]=val;
		cout<<"Enqueue data is "<<val<<endl;
	}
}

int Dequeue()
{
	int x;
	if(isEmpty())
	{
		cout<<"Queue is Empty!!"<<endl;
	}
	else if(front==rear)
	{
		x=queue[rear];
		queue[rear]=0;
		rear=-1;
		front=-1;
		return x;
	}
	else
	{
		x=queue[rear];
		queue[front]=0;
		front++;
		return x;
	}
}

void Display()
{
	for(int i=0;i<n;i++)
	{
		cout<<queue[i]<<" ";
	}
}

int main()
{
	cout<<"Enter n number of inputs (size of queue): ";
	cin>>n;
	queue=new int[n];
	for( int i=0;i<n;i++)
	{
		queue[i]=0;
	}
	
	int op, val;
	cout<<"Queue options:"<<endl;
	cout<<"[1] Enqueue()"<<endl;
	cout<<"[2] Dequeue()"<<endl;
	cout<<"[3] Dsiplay()"<<endl;
	
	do
	{
		cout<<endl<<"Enter option:"<<endl;
		cin>>op;
		switch(op)
		{
			case 0:
				{
					break;
				}
			case 1:
				{
					cout<<"Enter value to be Enqueue: "<<endl;
					cin>>val;
					Enqueue(val);
					break;
				}
			case 2:
				{
					Dequeue();
					break;
				}
			case 3:
				{
					Display();
					break;
				}
			default:
				{
					cout<<"Inalid option"<<endl;
				}
		}
	}
	while(op!=0);
		delete[]queue;
		return 0;	
}
