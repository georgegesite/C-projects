#include <iostream>
using namespace std;
struct Node{
	string data; 
	Node *next, *prev;
};
class DoublyLinkedList{
	public:
		Node *head;
		DoublyLinkedList()
		{
			head = NULL;
		}
		void InsertNode (string n)
		{
			Node *newnode  =  new Node;
			Node *add = head;
			newnode->data = n;
			newnode->next = NULL;
			if(head==NULL)
			{
				newnode->prev = NULL;
				head = newnode; 	
			}
			else
			{
        		while (add->next != NULL)
				{
				add = add->next;
				}
           	 	 add->next = newnode;
        		newnode->prev = add;
			}	
		}

		void InsertNodeHead(string n)
		{
			Node *newnode  =  new Node;
			newnode->prev = NULL;
			newnode->data = n;
			newnode->prev = NULL;
			newnode->next = head;
			head->prev = newnode;
			head = newnode;
		}

		void DeleteHeadNode()
		{
			Node *removehead = head;
			head = head->next;
			delete removehead;
			head->prev = NULL;

		}
		void DeleteLastNode()
		{
			if (head == NULL)
			{
				cout<<"List is Empty"<<endl;
			}
			else
			{
				Node *temp1, *temp2;
				temp1 = head;
				while(temp1->next != NULL)
				{
					temp2 = temp1;
					temp1 = temp1->next;
				}
				delete temp1;
				temp2->next = NULL;
			}
			
		}
		void display()
		{
			if(head==NULL)
			{
				cout<<"list empty";
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
		}
		void reverse()
		{
			Node *p1= head;
			Node *p2 = p1->next;
			p1->next = NULL;
			p1->prev = p2;
			while(p2!=NULL)
			{
			p2->prev = p2->next;
        	p2->next = p1;
       		p1 = p2;
        	p2 = p2->prev; 
			}
			head = p1;
		}
		
};

int main()
{
	DoublyLinkedList a;
	a.InsertNode("George");
	a.InsertNode("gesite");
	a.InsertNode("Flora Mae");
	a.InsertNode("123");
	
	a.display();
	cout<<endl;
	
 return 0;
 
}
