#include <string>
#include "Conversation.cpp"
class Conversationmanager
{
public:
	list<Conversation> conversations;
	Conversationmanager();
	~Conversationmanager();
	void CreateConversation(int conversationID);
	void GetConversation(int conversationID);

private:

};

Conversationmanager::Conversationmanager()
{
}

Conversationmanager::~Conversationmanager()
{
}