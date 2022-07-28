#include <iostream>
#include <sstream>
using namespace std;
string arr[100];
class George{
public:

 void process(string& str1)
 {
    string cut;
    int count = 0;
		 	stringstream ss(str1);
		 	while(ss>>cut)
		 	{
                 arr[count] = cut;
                 count++;
            }
            for (int i = count; i>=0; i--){
                cout<<arr[i]<< " ";
            }
    }
};

int main()
{
    string str1;
    str1 = "George Gesite is an awesome dude";
    George A;
    A.process(str1);
    return 0;
}