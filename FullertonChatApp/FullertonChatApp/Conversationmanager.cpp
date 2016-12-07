#include <string>
#include "Conversation.cpp"
class Conversationmanager
{
public:
	list<Conversation> conversations;
	Conversationmanager();
	~Conversationmanager();
	Conversation CreateConversation(list<User> groupMembers, int conversationID);
	Conversation GetConversation(int conversationID);
	void LeaveConversation(User myUser, Conversation &myConvo);

private:

};

Conversationmanager::Conversationmanager()
{
}

Conversationmanager::~Conversationmanager()
{
}

Conversation Conversationmanager::CreateConversation(list<User> groupMembers, int conversationID)
{
	Conversation myConvo;
	myConvo.groupMembers = groupMembers;
	myConvo.conversationID = conversationID;
	return myConvo;
}

Conversation Conversationmanager::GetConversation(int conversationID)
{
	Conversation myConvo;
	myConvo.conversationID = -1;
	for (list<Conversation>::iterator iterator = conversations.begin(), end = conversations.end(); iterator != end; ++iterator)
	{
		if (iterator->conversationID == conversationID)
		{
			myConvo = *iterator;
		}
	}

	return myConvo;
}

void Conversationmanager::LeaveConversation(User myUser, Conversation &myConvo)
{
	myConvo.groupMembers.remove(myUser);
	//TODO: Update UI
}