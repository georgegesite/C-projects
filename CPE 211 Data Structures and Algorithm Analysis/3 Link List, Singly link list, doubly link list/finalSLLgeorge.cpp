#include <iostream>
using namespace std;

struct Node {
string data;
Node *next;
};

class SLL{
    public:
    Node* head;
    SLL()
    {
        head = NULL;
    }
    void InserNode(string n) // INSERTS NODE AT THE END OF THE LIST
    {
        Node* newnode = new Node;
        newnode->data = n;
        newnode->next =  NULL;
        Node* temp = head;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;            
        } 
    }

    void InsertNodeatHead (string n) //INSERTS NODE AT THE HEAD 
    {
        Node *newnode = new Node;
        newnode->data = n;
        newnode->next = head;
        head = newnode;
    }

    void InsertNodeAfter (string n, string m) //INSERT NODE AFTER A NODE USING DATA
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
        if(prev ==NULL)
        return;
        else
        {
            newnode->next = prev->next;
        prev->next = newnode;
        }
    }

    void ReplaceDataNode (string n, string m)
    {
       
        Node *temp = head;
        while(temp->next!=NULL)
        {
            if(temp->data == n){
                temp->data = m;
                 break;
            }
             else
             {
                temp = temp->next;
             }    
        }
    }

    void deleteHeadNode() //DELETES THE HEAD NODE
    {
        Node *removehead = head;
        head = head->next;
        delete removehead;
    }

    void deletelastNode()
		{
			if(head==NULL)
			{
				cout<<"List empty";
			}
			else
			{
				Node *last, *secondtothelast;
				last = head;
				while(last->next != NULL)
				{
					secondtothelast = last;
					last = last->next;
				}
				delete last;
				secondtothelast->next = NULL;
            }
        }

    void deleteCertainNode(string n)
    {
        Node *temp = head;
        Node *prev = NULL; 
        if(temp!=NULL && temp->data == n)
        {
            head = temp->next;
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
            delete temp;
            }  
        }
        
    }      
 
    void Display() // DISPLAYS NODE
    {
        if (head == NULL)
        {
            cout<< "List is Empty";
        }
        else
        {
            Node* temp = head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp = temp->next;
            }
        }
        
    }
};

int main(){
    SLL sll;
    sll.InserNode("george");
    sll.InserNode("gesite");
    sll.InsertNodeatHead("my name is");
    sll.InsertNodeAfter("george","hello");
    sll.Display();
    cout<<endl;
    sll.ReplaceDataNode("george","amazing");
    sll.deleteHeadNode();
    sll.Display();
    return 0;
}