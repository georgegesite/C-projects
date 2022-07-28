#include <sstream>
#include <iostream>
#include <cmath>

using namespace std;
int count = 0;
struct Node {
int data;
int key;
Node *next;
};

class SLL{
    public:
    Node* head;
    
    SLL()
    {
        head = NULL;
    }
     
    void InserNode(int n) // INSERTS NODE AT THE END OF THE LIST
    {
        Node* newnode = new Node;
        count++;
        newnode->key = count;
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

    void InsertNodeatHead (int n) //INSERTS NODE AT THE HEAD 
    {
        Node *newnode = new Node;
        count++;
        newnode->data = n;
         newnode->key = count;
        newnode->next = head;
        head = newnode;
    }

    void InsertNodeAfter (int n, int m) //INSERT NODE AFTER A NODE USING DATA
    {
        
        Node *newnode = new Node;
        newnode->data = m;
         count++;
        newnode->key = count;
        Node *temp = head;
        Node *prev;
        while(temp->next!=NULL)
        {
            if(temp->key == n){
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

    void ReplaceDataNode (int n, int m)
    {
       
        Node *temp = head;
        while(temp->next!=NULL)
        {
            if(temp->key == n){
                temp->data = m;
                 break;
            }
             else
             {
                temp = temp->next;
             }    
        }
    }

    void deleteCertainNode(int n)
    {
        Node *temp = head;
        Node *prev = NULL; 
        if(temp!=NULL && temp->key == n)
        {
            head = temp->next;
            delete temp;
        }
        else 
        {
            while(temp!=NULL && temp->key != n)
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
    
    void converttodecimal(int n)
    {
        int m= 0;
         Node *temp = head;
        while(temp->next!=NULL)
        {
            if(temp->key == n){
                m = temp->data;
                 break;
            }
             else
             {
                temp = temp->next;
             }    
        }
        int decimalNumber = 0, i = 0, remainder= 0;
        while (m!=0)
        {
        remainder = m%10;
        m /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
        }
        temp->data = decimalNumber;
        
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
                 cout<<"("<<temp->data<<","<<temp->key<<")"<<"->";
                temp = temp->next;
            }
        }
        
    }
    void input()
    {   int a;
        cout<<"enter binary numbers, breaks at zero"<<endl;
        for(;;)
        {
            cin>>a;
            if(a==0)
            {
                break;
            }
            else{
                InserNode(a);
            }
        }

    }
};

int main(){
    SLL sll;
    sll.input();
    char option;
    int value;
    int val;
    do {
         cout<<endl<<"Menu options: "<<endl;
 		cout<<"[a] insert at beginning"<<endl;
 		cout<<"[b] insert at end()"<<endl;
 		cout<<"[c] insert at given position"<<endl;
 		cout<<"[d] update node"<<endl;
         cout<<"[e] delete"<<endl;
           cout<<"[f] converta binary(give its specific position)"<<endl;
         cout<<"[g] Display"<<endl;
      cout<<endl<<"Enter Option: "<<endl;
      cin >> option;
      switch(option)
      {
          case 0:{
			break;
		  }
         case 'a': {
            cout<<"Enter string to be inserted at beginning: "<<endl;
            cin>>value;
            sll.InsertNodeatHead(value);
            break;
         }
         case 'b': {
            cout<<"Enter string to be inserted at end:"<<endl;
            cin>>value;
            sll.InserNode(value);
            break;
         }  
         case 'c': {
            cout<<"Enter string to be inserted at a given position:"<<endl;
            cin>>val;
            cin>>value;
            sll.InsertNodeAfter(val,value);
            break;
         }
        case 'd': {
             cout<<"Enter position and string to be updated:"<<endl;
            cin>>val;
            cin>>value;
            sll.ReplaceDataNode(val,value);
            break;
         }
		 case 'e': {	
		 	cout<<"Enter position of string to be deleted: "<<endl;
            cin>>val;
            sll.deleteCertainNode(val);
			break;
		 }	 
         case 'f': {	
		 	cout<<"Enter position of binary to be converted into decimal: ";
             cin>>val;
             sll.converttodecimal(val);
			break;
		 }	 
          case 'g': {	
		 	sll.Display();
			break;
		 }	 

         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
       }while(option!=0);
    
   return 0;
}
