#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

class Stack{
	public:
		Node *top, *bottom;
		Stack()
		{
			bottom  = NULL;
			top = NULL;
		}
		void Push(int n)
		{
			Node *newnode = new Node;
			newnode->data = n;
			newnode->next = NULL;
			
			if(bottom==NULL)
			{
				bottom = newnode;
				top = newnode;
			}
			else
			{
				top->next = newnode;
				top= top->next;
			}
		}
		
		void Pop()
		{
			if(bottom==NULL)
			cout<<"Stack Underflow"<<endl;
			else
			{
				Node *temp = bottom;
				while(temp->next->next!=NULL)
				{
					temp = temp->next;
				}
				delete temp->next;
				temp->next = NULL;
				top = temp;
			}
		}
		
		void Display()
		{
			if(bottom==NULL)
			cout<<"Stack Underflow"<<endl;
			else
			{
				Node *temp = bottom;
				while(temp!=NULL)
				{
					cout<<temp->data<<" ";
					temp = temp->next;
				}
			}
		}
		
		int Top()
		{
			return top->data;
		}
		
		int Bottom()
		{
			return bottom->data;
		}
		
};

int main()
{
	Stack a;
	a.Push(1);
	a.Push(2);
	a.Display();
	cout<<endl<<a.Top()<<endl;
	
	return 0;
}
