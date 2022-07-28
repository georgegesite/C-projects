#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
int size = 0;
class Queue{
	public:
	Node *head, *tail;	
	
	Queue()
		{
			head = NULL;
			tail = NULL;
		}
	void Enqueue(int n)
		{
			Node *newnode = new Node;	
			newnode->data = n;			
			newnode->next = NULL;
			size++;
			if(head==NULL)				
			{			
				head = newnode;			
				tail = newnode;
			}
			else
			{
				tail->next = newnode;		
				tail = tail->next;			
			}
		}
		
	void Dequeue()
	{
		if(head==NULL)
			{
				cout<<"Queue Empty";
			}
			else
			{
			Node *removehead = head;
			head = head->next;
			delete removehead;	
			size--;
			}		
	}
	
	void Display()
	{
		if(head==NULL)
			{
				cout<<"Queue Empty";
			}
			else
			{
				Node *temp = head;		
				while(temp!=NULL)		
				{
					cout<<temp->data<<" ";
					temp = temp->next; 
				}
			}
			cout<<endl<<"size = "<<size<<endl;
		//george gwapo
	}
};

int main()
{
	Queue a;
	a.Enqueue(1);
	a.Enqueue(2);
	a.Enqueue(3);
	a.Display();
	cout<<endl;
	a.Dequeue();
	a.Display();
	cout<<endl;
	a.Enqueue(69);
	a.Display();
		
	return 0;
}
