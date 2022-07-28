#include <iostream>
using namespace std;

class Node{
public:
int key;
string data;
Node *next, *prev;

Node()
{
    key =0;
    next = NULL;
    prev = NULL;
}
Node(int k, string d)
{
    key = k;
    data = d;
}
};

class DoublyLinkedList{
    public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(Node *n)
    {
        head = n;
    }

    //1. Check if node exists using key calue
    Node *checkIfNodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;

    while(ptr!=NULL)
    {
     if(ptr->key == k)
     {
         temp = ptr;
     }   
     ptr = ptr->next;
    }
    return temp;
    }
    
    //2. Append a node to the list
    void appendNode (Node *n)
    {
        if(checkIfNodeExists(n->key)!=NULL)
        {
            cout<<"Node already exists with key value"<<n->key<<". Append another node with different key value"<<endl;
        }
        else
        {
            if(head == NULL)
            {
                head = n;
                cout<<"Node appended as Head Node"<<endl;
            }
            else
            {
                Node *ptr = head;
                while(ptr->next!=NULL)
                {
                    ptr =ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout<<"Node Appended"<<endl;
            }   
        }
    }
    //3. Prepend a node -  attach a node at the start
    void prependNode(Node *n)
    {
       if(checkIfNodeExists(n->key)!=NULL)
        {
            cout<<"Node already exists with key value"<<n->key<<". Append another node with different key value"<<endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout<<"Node Prepended as Head Node"<<endl;
            }
            else
            {
                
                head->prev = n;
            n->next = head;
            head = n;
            cout<<"Noted Appended"<<endl;
            }
            
        } 
    }

    //4. Insert Node after a certain node with key
    void inserNode(Node *n, int k)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout<<"Node doesn't exist"<<endl;
        }
        else
        {
            if(checkIfNodeExists(n->key)!=NULL)
            {
                cout<<"Node already exists with key value"<<n->key<<". Append another node with different key value"<<endl;
            }
            else
            {
                cout<<"Inserting"<<endl;
                Node *nextnode = ptr->next;
                //inserting at the end
                if(nextnode ==  NULL)
                {
                    ptr->next = n;
                    n->prev = ptr;
                    cout<<"Node Inserted at the End"<<endl;
                }
                else
                //inserting in between
                {
                    n->next = nextnode;
                    nextnode->prev = n;
                    n->prev = ptr;
                    ptr->next = n;
                    cout<<"Node inserted in between"<<endl;
                }
                
            }       
        }
    }

    //5.Delet node by unique key. Basically de-link not delete
    void deleteNode(int k )
    {
        Node *ptr = checkIfNodeExists(k);
        if(ptr == NULL)
        {
            cout<<"No node exist with key value: "<<k<<endl;
        }
        else
        {
            
            if(head == NULL)
            {
                cout<<"List is empty, can't delete"<<endl;
            }
            else 
            {
                if(head->key == k)//deleting at head
                {
                    head = head->next;
                    //head->previous = NULL;
                    cout<<"Node unlinked with key value"<<endl;
                }
                else
                {
                    Node *nextnode =  ptr->next;
                    Node *prevnode = ptr->prev;
                    //deleting at the end
                    if(nextnode == NULL)
                    {
                        prevnode->next = NULL;
                        cout<<"Node Deleted at the END"<<endl;
                    }
                    else
                    {
                        prevnode->next = nextnode;
                        nextnode->prev = prevnode;
                        cout<<"Node deleted in between"<<endl;
                    }
                }
            
            }
        
        }
    }

    //6. Update node by key
    void updateNode(int k, string d)
    {
        Node *ptr = checkIfNodeExists(k);
        if(ptr!=NULL)
        {
            ptr->data = d;
            cout<<"Node updated succesfully"<<endl;
        }
        else
        {
            cout<<"Node does not exist with the key value"<<k<<endl;
        }
    }

    //7. Print the list
    void printList()
    {
        if (head == NULL)
        {
            cout<<"list is empty"<<endl;
        }
        else
        {
            cout<<"printing the list: "<<endl;
            Node *temp= head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<", "<<temp->data<<") <-->";
                temp = temp->next;
            }
        }
        
        
    }

};

int main()
{
    DoublyLinkedList a;
	int option;
	int key1,k1;
    string data1;
	do{
		cout<<"Enter option"<<endl;
		cout<<"[1] AppendNode()"<<endl;
 		cout<<"[2] PrependNode()"<<endl;
 		cout<<"[3] InsertNode()"<<endl;
 		cout<<"[4] DeleteNode()"<<endl;
 		cout<<"[5] UpdateNode()"<<endl;
 		cout<<"[6] PrintList()"<<endl;
 		cout<<"[7] ClearScreen()"<<endl;
 		
 		cin>>option;
 		Node *n1=new Node();
 		
 		switch(option)
 		{
 			case 0:{
				break;
			 }
			 case 1:{
			 	cout<<"Enter key & data of the node to be appended"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	n1->key=key1;
			 	n1->data=data1;
			 	a.appendNode(n1);
			 	
				break;
			 }
			 case 2:{
			 	cout<<"Enter key & data of the node to be prepended"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	n1->key=key1;
			 	n1->data=data1;
			 	a.prependNode(n1);
				break;
			 }
			 case 3:{
			 	cout<<"Enter the key of the node you want to insert after"<<endl;
			 	cin>>k1;
			 	cout<<"Enter key & data of the new node"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	n1->key=key1;
			 	n1->data=data1;
			 	a.inserNode(n1, k1);
				break;
			 }
			 case 4: {
			 	cout<<"Enter key of the node to be deleted"<<endl;
			 	cin>>k1;
			 	a.deleteNode(k1);
				break;
			 }
			 case 5:{
			 	cout<<"Insert the key and data of the node to be updated"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	a.updateNode(key1,data1);
				break;
			 }
			 case 6:{
			 	a.printList();
				break;
			 }
			 case 7:{
			 	system("cls");
				break;
			 }
		 }
	}while(option!=0);
	
	return 0;
}