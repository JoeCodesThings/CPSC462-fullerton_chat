#include <string>
#include "User.cpp"
#include "EmojiObject.cpp"
#include "FileObject.cpp"

using namespace std;

class Conversation
{
public:
#pragma region Variable
	list<User> groupMembers;
	list<Message> messageList;
	int conversationID;
#pragma endregion

#pragma region Constructor , Destructor
	Conversation() {}
	~Conversation() {}
#pragma endregion

#pragma region Function

	//Create message, new message was create with text, emoji, file and creator userID 
	void CreateMessage(string msgText, EmojiObject emo, FileObject file, int userID) {
		Message tempMsg = Message(msgText, emo, file, userID);
		messageList.push_front(tempMsg);

	}

	/*
	Delete message with message ID and creator ID.
	*/
	bool DeleteMessage(int mID, int creatorID) {
		// Remove message with ID from lsit, check if creator is the one delete it. else deny.
		return true;
	}

	/*
	EditMessage Edit the message with correct User ID
	*/
	bool EditMessage(string txt, EmojiObject emo, FileObject file, int userID) {
		return true;
	}

	/*
	AddFriendToChat Add friend o the conversation
	*/
	bool AddFriendToChat(int userID) {
		return true;
	}

	/*
	Refresh Refresh the current conversation, get the most current list of message
	*/
	void Refresh() {

	}

	/*
	DisplayMessage Display each message
	*/
	string DisplayMessage() {
		return "";
	}

	/*
	ReadFile DownloadFile down to user computer
	*/
	FileObject ReadFile() {
		return FileObject();
	}

	/*
	ReadEmoji Read and display the emoji
	*/
	EmojiObject ReadEmoji() {
		return EmojiObject();
	}

	/*
	CreateAlert Create alert when newmessage created
	*/
	bool CreateAlert() {
		return true;
	}
#pragma endregion

private:

};



class Message
{
public:
	string text;
	EmojiObject emoji;
	FileObject file;
	int userID;
	Message() {}
	Message(string txt, EmojiObject emo, FileObject fil, int uID) {
		text = txt;
		emoji = emo;
		file = fil;
		userID = uID;
	}
	~Message() {}

private:

};


/*
Alert Alertobject will notify user of new message.
*/
class Alert
{
public:
#pragma region Variable

#pragma endregion

#pragma region Constructor , Destructor
	Alert() {}
	~Alert() {}
#pragma endregion

#pragma region Function
	/*
CreateAlert notify user of new message
*/
	bool CreateAlert() {
		
	}
#pragma endregion
private:

};



