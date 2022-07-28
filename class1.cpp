#include <iostream>
#include <string>
#include <vector>



using namespace std;

class User{
	public:
		string fname;
		string lname;
		
};
 
 int lol (vector <User> &users, User user)
 {
 	for (int i=0; i< user.size(); i++)
 	{
 		if (users[i].fname == user.fname && users[i].lname == user.lname)
 		{
 			return i;
		 }
 		
	 }
	 users.push_back(user);
	 return users.size() - 1;
 }
 int main ()
 {
 	User user;
 	user.fname = "George";
 	user.lname = "Gesite";
 	
 	vector <User> users;
 	users.push_back(User());
 	
 
 	
 	return 0;	
 }
