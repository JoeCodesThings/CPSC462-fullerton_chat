#include <string>
#include "User.cpp"

using namespace std;

class UserTerminal
{
public:
	User currentUser;
	UserTerminal() {
		currentUser = User();
	}
	~UserTerminal() {
		
		
	}
	bool Login() {			
		return true;
	}
	void Logout() {
	
	}
	bool Register() {
	}
	void GetFriendList() {
	}
	

private:

};


