#include "User.cpp"  
#include "Server.cpp"  
#include "Conversationmanager.cpp"
#include <string>

using namespace std;

// Special class of user with ability to ban users and clear chats
class Admin:User
{
public:
	void BanUser(User scumbag, Server myServer, MYSQL *connection);
	void ClearChat(Conversation myConvo, Server myServer);
	void MonitorChatlog(Conversation myConvo);

private:

};

void Admin::BanUser(User scumbag, Server myServer, MYSQL *connection)
{
	//TODO: add user to blocked list on server and kick
	char *sql_query = "INSERT INTO bannedlist";
	if (MYSQL_RES* res = myServer.do_query(connection, sql_query))
	{
		printf("%s has been successfully banned.", scumbag.userName);
	}
	else
	{
		printf("Unknown user.");
	}
}

void Admin::ClearChat(Conversation myConvo, Server myServer)
{
	myConvo.messageList.clear();
	//TODO: Clear convo on server
}

void Admin::MonitorChatlog(Conversation myConvo)
{
	for (list<Message>::const_iterator iterator = myConvo.messageList.cbegin(), end = myConvo.messageList.cend(); iterator != end; ++iterator)
	{
		const char* str = iterator->text.c_str();
		printf(str);
	}
}