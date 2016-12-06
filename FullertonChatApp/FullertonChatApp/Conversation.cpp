#include <string>
#include "User.cpp"
using namespace std;

class Conversation
{
public:
	list<User> groupMembers;
	list<Message> messageList;
	Conversation();
	~Conversation();
	void CreateMessage(string msgText, EmojiObject emo, FileObject file, int userID	) {
		Message tempMsg = Message(msgText, emo, file, userID);
		messageList.push_front(tempMsg);
 
	}
private:

};

Conversation::Conversation()
{
	
	
}

Conversation::~Conversation()
{
}


class Message
{
public:
	string text;
	EmojiObject emoji;
	FileObject file;
	int userID;
	Message();
	Message(string txt, EmojiObject emo , FileObject fil, int uID) {
		text = txt;
		emoji = emo;
		file = fil;
		userID = uID;
	};
	~Message();

private:

};

Message::Message()
{
}

Message::~Message()
{
}

class FileObject
{
public:
	FileObject();
	~FileObject();

private:

};

FileObject::FileObject()
{
}

FileObject::~FileObject()
{
}

class EmojiObject
{
public:
	EmojiObject();
	~EmojiObject();

private:

};

EmojiObject::EmojiObject()
{
}

EmojiObject::~EmojiObject()
{
}