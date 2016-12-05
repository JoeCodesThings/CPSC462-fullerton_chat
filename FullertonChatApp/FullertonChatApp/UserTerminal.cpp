#include <string>
#include "User.cpp"

using namespace std;

class UserTerminal
{
public:
	User currentUser;
	UserTerminal();
	~UserTerminal();
	bool Login();
	void Logout();
	bool Register() {

	};
	void GetFriendList();
	

private:

};

bool UserTerminal::Login() {
	return true;
}

void UserTerminal::Logout() {

}

//bool UserTerminal::Register() {
//	return true;
//}

void UserTerminal::GetFriendList() {

}

UserTerminal::UserTerminal()
{
	currentUser = User();
}

UserTerminal::~UserTerminal()
{
}