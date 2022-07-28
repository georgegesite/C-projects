#include <iostream>
#include <sstream>

using namespace std;

struct Node {
string data;
Node *next;
};
string str;
class SLL
{
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
    void getpalindrome()
    {
        string cut;
		 	stringstream ss(str);
		 	while(ss>>cut)
		 	{
		 		int c= cut.length();
		 		int count =0,count1=0,m=0,flag=0;
		 		for (int i=0;i<c;i++) // check for palindrome
		 		{
		 			if (cut[i]!=cut[c-i-1])
					count++;
					break;
				 }
				 m=c/2;
				 for( int j=2;j<=m;j++)//check for prime
				 {
				 	if(c%j==0)
				 	{
				 		flag=1;
					 }
				 }
				 
				 if (count!=1 && flag==0)//enter palindromic prime string to stack
				 {
				 	InsertNode(cut);
				}
			 }
			 cout<<"Palindromic Prime word(s): "<<endl;	
              if (head == NULL)
        {
            cout<< "List is Empty";
        }
        else
        {
            Node* temp = head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }
			 
    }

    void InsertNode(string n) // INSERTS NODE AT THE END OF THE LIST
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

int main()
 {
 	int op;
 	string value;
     SLL sll;
 	sll.input();
 	sll.getpalindrome();
 	cout<<endl<<"Stack options: "<<endl;
   
   	do {
           cout<<endl;
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Display()"<<endl;
      cout<<endl<<"Enter Option: "<<endl;
      cin>>op;
      switch(op) {
      	case 0:{
			break;
		  }
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            sll.InsertNode(value);
            break;
         }
         case 2: {
            sll.deletelastNode();
            break;
         }
		 case 3: {	
		 	sll.Display();
			break;
		 }	 
        
         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
   }while(op!=0);
   return 0;
 }
