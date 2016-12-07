#include <string>

class EmojiObject
{
public:
	EmojiObject() {}
	~EmojiObject() {}

private:

};

class EmojiBar
{
public:
	EmojiObject emo;
	EmojiBar() {}
	~EmojiBar() {}
	/*
	CreateEmoji Create Emoji object to add to Message
	*/
	EmojiObject CreateEmoji() {
		return EmojiObject();
	}
private:

};

