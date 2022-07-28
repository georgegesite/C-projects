/*	
 *	CPE 211 ASSIGNMENT ONE
 *	STACK 
 *	GEORGE GESITE
 *	BSCpE-2A	
 */
 
 #include <iostream>
 using namespace std;
 	int *stack,n,top =-1;
 class STACK{
 	public:			
 		bool isFull();
 		bool isEmpty();
 		void push(int value);
 		void pop();
 		void topstack();
 		void bottomstack();
 		void reverse();
 };
 bool STACK::isFull()
 {
 	if(top>=n-1)
	return true;
	else
	return false;
 }
 bool STACK::isEmpty()
 {
 	if(top==-1)
	return true;
	else
	return false;
 }
 void STACK::push(int val)
 {
 	if(isFull()){
   	 cout<<"Stack Overflow"<<endl;
   }
   else {
      top++;
      stack[top]=val;
       cout<<"Inserted data "<<val<<endl;
   }
 }
 void STACK::pop()
 {
 	 if(isEmpty()){
   	 cout<<"Stack Underflow"<<endl;
   }
  
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
 }
 void STACK::topstack()
 {
 	if(isEmpty()){
   	 cout<<"Stack is Empty"<<endl;
   }
   else
   {
   	cout<<"Top of stack is "<<stack[top]<<endl;
   }
 }
 void STACK::bottomstack()
 {
 	if(isEmpty())
	{
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		int bot=0;
		cout<<"Bottom of the stack is "<<stack[bot]<<endl;
	}
 }
 void STACK::reverse()
 {
 		if(isEmpty())
   {
   	cout<<"Stack is Empty"<<endl;
	}   
   else{
	int i,j,temp;
   		i=0; 
   		 j=top;  	   
	while(i<j && j>i)
	{
		temp=stack[i];
		stack[i]=stack[j];
		stack[j]=temp;
		i++;
		j--;
	}
      cout<<"***Stack Reversed***"<<endl;
    	for(int i=top; i>=0; i--)
	  {
      	cout<<"\t"<<stack[i]<<endl;
	  }
		}
 }
 
 int main()
 {
 	int op, value;
 	STACK s;
 	cout<<"Enter n number of inputs(size of stack): ";
	cin>>n;
	stack=new int[n];   
   do {
   	cout<<endl<<"Stack options: "<<endl;
 		cout<<"[1] Push()"<<endl;
 		cout<<"[2] Pop()"<<endl;
 		cout<<"[3] Top()"<<endl;
 		cout<<"[4] Bottom()"<<endl;
 		cout<<"[5] Reverse()"<<endl;
      cout<<endl<<"Enter Option: "<<endl;
      cin>>op;
      switch(op) {
      	case 0:{
			break;
		  }
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            s.push(value);
            break;
         }
         case 2: {
            s.pop();
            break;
         }  
         case 3: {
            s.topstack();
            break;
         }
        case 4: {
            s.bottomstack();
            break;
         }
		 case 5: {	
		 	s.reverse();
			break;
		 }	 
        
         default: {
            cout<<"Invalid Option"<<endl;
         }
      }
   }while(op!=0);
   delete[]stack;
   return 0;
 }
