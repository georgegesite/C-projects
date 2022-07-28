#include <sstream>
#include <iostream>

using namespace std;
string str;
int count = 0;
struct Node {
string data;
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

    void input()
    {
        cout<<"Input: ";
	getline(cin,str);
    }
    void CheckifPrime()
    {
        string cut;
		 	stringstream ss(str);
		 	while(ss>>cut)
		 	{
		 		int c= cut.length();
		 		int m=0,flag =0;
		 		
		 		m=c/2;
				 for( int j=2;j<=m;j++)//check for prime
				 {
				 	if(c%j==0)
				 	{
				 		flag=1;
					 }
				 }
				 if (flag == 0)
             {
                 InserNode(cut);
             }
             }

             
             cout<<"Word(s) whose length is a prime number:  "<<endl;
              Node* temp = head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->data<<","<<temp->key<<")"<<"->";
                temp = temp->next;
            }


    }
    void InserNode(string n) // INSERTS NODE AT THE END OF THE LIST
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

    void InsertNodeatHead (string n) //INSERTS NODE AT THE HEAD 
    {
        Node *newnode = new Node;
        count++;
        newnode->data = n;
         newnode->key = count;
        newnode->next = head;
        head = newnode;
    }

    void InsertNodeAfter (int n, string m) //INSERT NODE AFTER A NODE USING DATA
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

    void ReplaceDataNode (int n, string m)
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
};

int main(){
    SLL sll;
    sll.input();
    sll.CheckifPrime();
    char option;
    string value;
    int val;
    do {
         cout<<endl<<"Menu options: "<<endl;
 		cout<<"[a] insert at beginning"<<endl;
 		cout<<"[b] insert at end()"<<endl;
 		cout<<"[c] insert at given position"<<endl;
 		cout<<"[d] update node"<<endl;
         cout<<"[e] delete"<<endl;
         cout<<"[f] Display"<<endl;
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
