 #include <iostream>
 using namespace std;

 struct Node
 {
     string data;
     Node *next;
 };

 class CLL{
    public:
    Node *head;
    CLL()
    {
        head = NULL;
    }

    void InsertNode (string n)
    {
        Node *newnode = new Node;
        newnode->data = n;
        Node *temp = head;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head; 
        }
    }

    void InsertNodeHead (string n)
    {
        Node *newnode = new Node;
        newnode->data = n;
        Node *temp = head;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            while(temp->next!=head)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head; 
            head = newnode;
        }
    }

    void InsertNodeAfter (string n, string m)
    {
        Node *newnode = new Node;
        newnode->data = m;
        Node *temp = head;
        Node *prev =NULL;
        do
        {
            if(temp->data ==n)
            {
                prev = temp;
                break;
            }
            else
            {
                temp = temp->next;
            }
            }while (temp!=head);
            if(prev ==NULL)
        return;
        else
        {
            newnode->next = prev->next;
        prev->next = newnode;
        }

       
    }
     void deleteCertainNode (string n)
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

    void Display()
    {
        Node* temp = head;
        if(head == NULL)
        return;
        else
        {
            do
            {
               cout<< temp->data << "->";
               temp= temp->next;
            } while (temp!=head);  
        }
        
    }


 };

 int main ()
 {
     CLL cll;
     cll.InsertNode("george");
     cll.InsertNode("gesite");
     cll.InsertNode("is");
     cll.InsertNode("gwapo");
     cll.InsertNodeHead("hello");
     cll.Display();

    cout<<endl;
    cll.deleteCertainNode("is");
    cll.InsertNodeAfter("gesite","FLORA");
    cll.Display();
     return 0;
 }