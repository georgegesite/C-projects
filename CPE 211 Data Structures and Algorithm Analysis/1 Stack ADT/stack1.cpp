/*
 *stack try no.1
 */
 
/*
Write a program that will n numbers of integer. Your program will
store, remove, display the top, bottom, the stack and reverses the
order of the elements of your stack
Illustration:
Enter n number of inputs; 5
Stack options:
[A] push()
[B] push()
[C] top()
[D] bottom()
[E} reverse()
*/
 #include <iostream>
 #include <stack>
 
 using namespace std;
 
 
 int main()
 {
 	stack<int> mainstack;
 	mainstack.push(1);
 	mainstack.push(6);
 	mainstack.push(31);
 	mainstack.push(69);
 	
 	
 	cout<< "no. of ints on the stack " << mainstack.size() << endl;
 	
 	cout<< "top= " << mainstack.top() << endl;
 	
 }
