#include <iostream>
using namespace std;

class Node{
	public:
		int key,data; 	//parts of the node
		Node *next;
		
		Node()//default constructor
		{
			key=0;
			data=0;
			next=NULL;
		}
		Node(int k,int d)//pass the arguments
		{
			key = k;
			data  = d;
		}
};

class SinglyLinkedList{
	public:
		Node *head;
		Node *tail;
		
		SinglyLinkedList()//head has no data
		{
			head=NULL;
		}
		SinglyLinkedList(Node *n)//passing data to n
		{
			head=n;
		}
		
		Node* nodeExists(int k)//1. check if node exists using key value
		{
			Node *temp = NULL;
			Node *ptr = head;//has the address of head
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
		}
		
		void appendNode(Node *n)//2.Append a node to the list. attach a node to the end
		{
			if(nodeExists(n->key)!=NULL)//there exist a node that already has that key, cannot append
			{
				cout<<"Node already Exists"<<n->key<<"Append another node with a diffrent key value"<<endl;
			}
			else
			{
				if(head==NULL)//no  node in the singly linked list
				{
					head=n;
					cout<<"Node Appended"<<endl;
				}
				else{
						Node *ptr = head;//traversal in the linked list
						while(ptr->next!=NULL){
							ptr =ptr->next;
						}
						ptr->next=n;
						cout<<"Node appended"<<endl;
				}
			}
		}
		void prependNode(Node* n)//3Preppend, attach a node at the start
		{
			if(nodeExists(n->key)!=NULL)//check if node exists with a certain key
			{
				cout<<"Node already Exists"<<n->key<<"Append another node with a diffrent key value"<<endl;
			}
			else
			{
				n->next=head;//points to the address of head
				head=n;//head = new node 
				cout<<"Node appended"<<endl;
			}
		}
		
		void insertNode(int k, Node *n)//4. Insert a node after a particular node in the list
		{
			Node *ptr = nodeExists(k);//copy the adress of pointer of key K
			if(ptr==NULL)//check if key exists
			{
				cout<<"No node exist with key value"<<endl;
			}
			else
			{
				if(nodeExists(n->key)!=NULL)//there exist a node that already has that key, cannot append
				{
				cout<<"Node already Exists"<<n->key<<"Append another node with a diffrent key value"<<endl;
				}
				else
				{	//assume n as n4
					n->next=ptr->next;//stores same address as of pointer
					ptr->next=n;//link n2 to n4
					cout<<"Node Inserted"<<endl;
				}
			}
		}
		
		void deleteNodebykey(int k)//5. Delete node by key(unlink the node)
		{
			if(head==NULL){//check if there is any node  in the list
				cout<<"List is Empty"<<endl;
			}
			else if(head!=NULL)
			{
					if(head->key==k)//wont delete, just unlink (if head is to be unlinked)
					{
						head= head->next;
						cout<<"Node UNLINKED with key value: "<<k<<endl;
					}
					else//if the node after the head is to be unlinked after a particular key
					{
						Node *temp=NULL;//temp has no address
						Node *prevptr=head;//address of head
						Node *currentptr=head->next;//address of the next of head
						while(currentptr!=NULL)
						{
							if(currentptr->key==k)//if node has the key
							{
								temp=currentptr;//copy the addres of current pointer
								currentptr=NULL;//flush address in current pointer to stop while loop
							}
							else
							{
								prevptr=prevptr->next;
								currentptr = currentptr->next;
							}
						}	
						if(temp!=NULL)//temp has the address of the node you want to unlink/delete
						{
							prevptr->next=temp->next;//the next of the previus node will be the temp(linking n1 and n3) 
							cout<<"Node unlinked with key value: "<<k<<endl;
						}
						else
						{
							cout<<"Node doesnt exist with key value"<<endl;
						}
					}
			}
		}
		void UpdateNodebyKey(int k, int d)//6. replaces the data of a certain node by key
		{
			Node *ptr = nodeExists(k);//checks if node exists
			if(ptr!=NULL)//node exists
			{
				ptr->data=d;//the node will have the value of the new data D
				cout<<" Node Data updated successfully"<<endl;
			}
			else{
				cout<<" Node doesn't exists with the key value"<<endl;
			}
			
		}
		
		void PrintList()//7.prints all the data inside the List
		{
			if(head==NULL)//check if there is any node  in the list
			{
				cout<<"List is Empty"<<endl;
			}
			else
			{
				cout<<"List contains"<<endl;
				Node *temp = head;//copy the address of head
				while(temp!=NULL)//starts at node 1 until NULL
				{
					cout<<"("<<temp->key<<", "<<temp->data<<")-->"<<endl;
					temp=temp->next;//temp will have the address of the next node
				}
			}
		}
		
};

int main()
{
	SinglyLinkedList s;
	int option;
	int key1,k1,data1;
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
			 	s.appendNode(n1);
			 	
				break;
			 }
			 case 2:{
			 	cout<<"Enter key & data of the node to be prepended"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	n1->key=key1;
			 	n1->data=data1;
			 	s.prependNode(n1);
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
			 	s.insertNode(k1,n1);
			 	
				break;
			 }
			 case 4: {
			 	cout<<"Enter key of the node to be deleted"<<endl;
			 	cin>>k1;
			 	s.deleteNodebykey(k1);
				break;
			 }
			 case 5:{
			 	cout<<"Insert the key and data of the node to be updated"<<endl;
			 	cin>>key1;
			 	cin>>data1;
			 	s.UpdateNodebyKey(key1,data1);
				break;
			 }
			 case 6:{
			 	s.PrintList();
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
