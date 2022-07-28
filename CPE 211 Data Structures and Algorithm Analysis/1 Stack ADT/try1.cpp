#include <iostream>
#define MAX 5
using namespace std;
int top=-1;
int ele[MAX];
		
class Stack{	
		public:	
			
			bool isFull()
			{
				if(top>=MAX-1)
				return true;
				else
				return false;
			}
			bool isEmpty()
			{	
				if(top==-1)
				return true;
				else 
				return false;
			}
			void push(int item)
			{
				if(isFull())
				{
					cout<<"Stack Overflow"<<endl;			
				}
				else
				{
					top++;
					ele[top]=item;
					cout<<" Item pushed"<<endl;
				}
			}
			void pop()
			{
				if(isEmpty())
				{
					cout<<"Stack UnderFlow"<<endl;
				}
				else
				{
					 cout<<"The popped element is "<< ele[top] <<endl;
					top--;
				}
			}
			void display()
			{
				cout<<"The values of the stack are"<<endl;
				for(int i=top;i>=0;i--)
				{
					cout<<"\t"<<ele[i]<<endl;
				}
				
			}

};

		main()
{
		Stack s;
		int op,item;
		cout<<"Enter option"<<endl;	
		do{
				cout<<"[1] Push()"<<endl;
 				cout<<"[2] Pop()"<<endl;
 				cout<<"[3] Display()"<<endl;
 				cin>>op;
 				switch(op){
 					case 0:{
						break;
					 }
					 case 1:{
					 	cout<<"Enter value to be pushed: "<<endl;
					 	cin>>item;
					 	s.push(item);
						break;
					 }
					 case 2:{
					 	s.pop();
						break;
					 }
					 case 3:{
					 	s.display();
						break;
					 }
 					
				 }
		}
		while(op!=0);
		return 0;
		
		
}


