#include <iostream>
 using namespace std;

 struct Node
 {
     string data;
     Node *next;
 };
 
 class CircularLinkedList{
     public:
     Node *head  = NULL;

    void InsertNode(string d)
    {
        Node *newnode =  new Node;
        newnode->data = d;
        if(head==NULL)
        {
            head = newnode;
            newnode->next = head;
            cout << "Node Appended at first Head position" << endl;
        }
        else
        {
            Node *ptr =head;
            while(ptr->next!=head)
            {
                ptr =ptr->next;
            }
            ptr->next = newnode;
            newnode->next =head;
            cout << "Node Appended" << endl;
        }
    }

    void InsertHead(string d)
    {
        Node *newnode =  new Node;
        newnode->data = d;
        if(head==NULL)
        {
            head = newnode;
            newnode->next = head;
            cout << "Node Appended at first Head position" << endl;
        }
        else
        {
            Node * ptr = head;
        while (ptr -> next != head) 
            {
                 ptr = ptr  -> next;
            }
        ptr -> next =newnode;
        newnode -> next = head;
        head = newnode;
        cout << "Node Prepended" << endl;
        }
        
    }
    void Display()
    {
       
         if (head == NULL)
        {
            cout<<"List empty"<<endl;
        }
        else
        {
           Node *ptr = head;
    do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
        }
    }

    
        
 };

 int main()
 {
     CircularLinkedList obj;
     obj.InsertNode("george");
     obj.InsertNode("gesite");
     obj.InsertHead("hi my name is");
     obj.InsertNode("hellow");
     obj.Display();
     
     return 0;
 }
 