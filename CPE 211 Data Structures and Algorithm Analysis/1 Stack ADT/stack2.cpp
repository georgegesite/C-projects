/*
 *	ASSIGNMENT ONE
 *	STACK
 *	GEORGE GESITE
 *	BSCpE-2A	
 */
 
 #include <iostream>
 #include <stack>
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
 
 class STACK{
 	public:
 		int n,x;
 		stack<int> mainstack;
 		void input();
 };
 
 int main(int argc, char** argv) {
 		STACK a;
 	a.input();
	return 0;
}
 
 void STACK::input()
 {
 	cout <<"Enter n number of inputs: " << endl;
 	cin >> n;
 	cout <<"Enter inputs:" <<endl;
 	for(int i=0;i<n;i++)
 	{
 		cin >> x;
 		mainstack.push(x);
	 }
	cout<<"Stack options: " <<endl;
	cout<<"[1] push() " <<endl;
	cout<<"[2] pop() " <<endl;
	cout<<"[3] top() " <<endl;
	cout<<"[4] bottom() " <<endl;
	cout<<"[5] reverse()" <<endl <<endl;
	cout<<" Enter option: "<<endl;
 }
