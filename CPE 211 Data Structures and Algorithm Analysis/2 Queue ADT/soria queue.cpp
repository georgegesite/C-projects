#include <iostream>
#include <conio.h>
using namespace std;
int n, front = -1, rear = -1;
int *queue;

bool isEmpty()
{
	if(front==-1 && rear==-1)
	return true;
	else
	return false;
}

bool isFull()
{
	if(rear>=n-1)
	return true;
	else
	return false;
}

void Enqueue(int val) {
   if(isFull()){
   	cout<<" QUEUE is full "<<endl;
   }
   else if(isEmpty())
   {
   	rear=0;
   	front=0;
   	queue[rear]=val;
   	}
   else {
      rear++;
      queue[rear]=val;
       cout<<"Inserted data "<<val<<endl;
   }
}

int Dequeue(){
	int x;
	if(isEmpty())
	{
		cout<<" QUEUE is empty "<<endl;
	}
	else if(front==rear)
	{
	x=queue[rear];
	queue[rear]=0;
	rear=-1;
	front=-1;
	return x;
	}
	else{
	x=queue[rear];
	queue[front]=0;
	front++;
	return x;
		}
	}
	
void Display(){
	for(int i=0;i<n;i++){
		cout<<queue[i]<<" ";
		}
	}

int main(int argc, char *argv[])
{
	cout << "Enter n number of inputs(size of queue): ";
	cin >> n;
	queue = new int[n];
	int op, val;
	cout << "Stack options: " << endl;
	cout << "[1] Enqueue()" << endl;
	cout << "[2] Dequeue()" << endl;
	cout << "[3] Display()" << endl;

	do
	{
		cout << endl
			 << "Enter Option: " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
		{
			break;
		}

		case 1:
		{
			cout << "Enter value :" << endl;
			cin >> val;
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
			cout << "Invalid Option" << endl;
		}
		}
	}
	while (op != 0);
	delete[] queue;
	return 0;
}
