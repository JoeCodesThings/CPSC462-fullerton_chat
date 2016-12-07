#include "pch.h"
using namespace std;
class FriendList
{
public:
	list<int> friendList;
	FriendList();
	~FriendList();
	void GetFriendList(string);
	bool AddFriend(int);
	void DeleteFriend(int);
	void RefreshList();
private:

};

void FriendList::RefreshList() {
	//TODO: Fetch data from server and reload UI
}

bool FriendList::AddFriend(int id) {
	friendList.push_front(id);
	// push to database and check if it success.
	return true;
}

void FriendList::DeleteFriend(int id) {
	friendList.remove(id);
}


void FriendList::GetFriendList(string id) {
	//TODO: Bring up UI for friendlist

}
FriendList::FriendList()
{
	RefreshList();
}

FriendList::~FriendList()
{
}