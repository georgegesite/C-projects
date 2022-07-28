#include<cstdlib>
#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

class stack_II
{
	public:
		void size();
		void input();
		void process();
		void push();
		void pop();
		void exit();
		void lines();
		
		int i,n,num[100],list,s,stack[100];
		
};

int main(int argc, char * argv[])
{
	char let[100];
	stack_II a;
	a.input();
	for(;;)
	{
		cout<<"[A]:Push\n[B]:Pop\n[X]:Exit"<<endl;
		a.lines();
		cout<<"Enter choice:";
		cin>>let;
		cout<<"------------------------------------------"<<endl;
		
		if(let[0]=='A'||let[0]=='a')
		{
			a.push();
			a.lines();
		}
		if(let[0]=='B'||let[0]=='b')
		{
			a.pop();
			a.lines();
		}
		if(let[0]=='X'||let[0]=='x')
		{
			a.exit();
			break;
		}
		if(let[0]!='a'&&let[0]!='b'&&let[0]!='x')
		{
			cout<<"Try again"<<endl;
			a.lines();
		}
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

void stack_II::input()
{   
list=0;
s=0;
	cout<<"Input: ";
	for(i=0;i<100;i++)
	{
		cin>>n;
		if(n!=0)
		{
			num[i]=n;
			list=i;
			n=0;
		}
		else
		{
			i=100;
		}
	}
	lines();
}

void stack_II::push()
{
	if(num[0]!=0)
	{
		s++;
		if(s==0)
		{
			s++;
		}
		
		stack[s]=num[0];
		for(i=0;i<list;i++)
		{
			num[i]=num[i+1];
		}
		num[list]=0;
		list--;
	}
	
	else
	{
		cout<<"Nothing to Push"<<endl;
		lines();
		for(i=0;i<20;i++)
		{
			num[i]=0;
		}
		list=0;
		
	}
	
	cout<<"Stack: ";
	for(i=1;i<=s;i++)
	{
		cout<<stack[i]<<' ';
	}
	cout<<endl;
}

void stack_II::pop()
{
	if(s==0)
	{
		cout<<"Empty"<<endl;
		lines();
	}
	else
	{
		stack[s]=0;
		s--;
		if(s==0)
		{
			cout<<"Empty"<<endl;
			lines();
		}
	}
	
	if(num[0]==0&&s==0)
	{
		list=0;
		input();
	}
	
	if(s>0)
	{
		cout<<"Stack: ";
		for(i=1;i<=s;i++)
		{
			cout<<stack[i]<<' ';
		}
	}
	cout<<endl;

}

void stack_II::exit()
{
	cout<<"END";
}

void stack_II::lines()
{
	cout<<"-------------------------------------------"<<endl;
}
