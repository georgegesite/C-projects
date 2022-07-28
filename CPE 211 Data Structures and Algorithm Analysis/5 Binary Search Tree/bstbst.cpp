#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;
class BSTnode{
public:

Node *GetNewNode(int data) // creates a new node, returns address of node
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *InsertNode(Node* &root, int data)
{
    if(root==NULL)
    {
        root = GetNewNode(data);  
    }
    else if(data < root->data)
    {
        root->left = InsertNode(root->left, data);
    }
    else
    {
        root->right = InsertNode(root->right, data);
    }
      return root;
      cout<<"int inserted"<<endl;
}

void Display(Node *root)
{
    if(root!=NULL)
    {
        Display(root->left);
        cout<<root->data<<" ";
        Display(root->right);
    }
}

};

int main()
{
    BSTnode bst;
   bst.InsertNode(root,1);
   bst.InsertNode(root,5);
   bst.InsertNode(root,3);
   bst.InsertNode(root,6);
   bst.InsertNode(root,2);
   bst.Display(root);
   return 0;
}
