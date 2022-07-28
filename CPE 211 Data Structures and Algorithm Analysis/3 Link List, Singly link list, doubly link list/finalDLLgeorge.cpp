#include <iostream>
using namespace std;

struct Node {
string data;
Node *next, *prev;
};

class DLL{
public:
Node *head;
    DLL()
    {
        head = NULL;
    }
    void InsertNode (string n) 
    {
        Node *newnode = new Node;
        Node *temp = head;
        newnode->data = n;
        newnode->next = NULL;
        if(head==NULL)
			{
				newnode->prev = NULL;
				head = newnode; 	
			}
			else
			{
        		while (temp->next != NULL)
                {
	            temp = temp->next;
                }
      	 		 temp->next = newnode;
        		newnode->prev = temp;
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

    void InsertNodeAfter(string n, string m)
    {
        Node *newnode = new Node;
        newnode->data = m;
        Node *temp = head;
        Node *prev;
        while(temp->next!=NULL)
        {
            if(temp->data == n){
                 prev = temp;
                 break;
            }
             else
             {
                temp = temp->next;
             }    
        }
        if (prev == NULL)return;
        else
        {
            newnode->next = prev->next;
        prev->next = newnode;
        newnode->prev = prev;
        if(newnode->next!=NULL)
        {
            newnode->next->prev = newnode;
        }
        }
    }
    void InsertNodeBefore (string n, string m)
    {
        Node *newnode = new Node;
        newnode->data = m;
        Node *temp = head;
        Node *next;
        while(temp->next!=NULL)
        {
            if(temp->data == n){
                 next = temp;
                 break;
            }
             else
             {
                temp= temp->next;
             }    
        }
        if (next == NULL)
        return;
        else
        {
           newnode->prev =next->prev;
           next->prev = newnode;
           newnode->next = next;
           newnode->prev->next = newnode;

        }
        
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
       void deleteCertainNode(string n)
    {
        Node *temp = head;
        Node *prev = NULL; 
        if(temp!=NULL && temp->data == n)
        {
            head = temp->next;
            head->prev = NULL;
            delete temp;
        }
        else 
        {
            while(temp!=NULL && temp->data != n)
            {
                prev = temp;
                temp = temp->next;
            }
            if (temp ==NULL)
            return;
            else
            {
               prev->next = temp->next;
               temp->prev = prev;
            delete temp;
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
		
    void Display() //Displays Node
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
					cout<<temp->data<<"<->";
					temp = temp->next; 
				}
			}
		}

    
		
};

int main()
{
    DLL dll;
    dll.InsertNode("george");
    dll.InsertNode("gesite");
    dll.InsertNodeHead("my name is");
    dll.InsertNode(" hey");
    dll.Display();
    cout<<endl;
    dll.InsertNodeBefore("gesite","c");
    dll.Display();
    cout<<endl;
    dll.deleteCertainNode("c");
    dll.Display();
    cout<<endl;
    dll.reverse();
    dll.Display();

    return 0;
}