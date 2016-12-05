#include "pch.h"  
#include <string>

using namespace std;

class User
{
public:
	string userName;
	string password;
	double locationX;
	double locationY;
	string bio;
	User();
	User(string, string, double, double, string);
	~User();
	
private:

};

User::User()
{
	userName = "";
	password = "";
	locationX = 0;
	locationY = 0;
		bio = "";
	}
User::User(string uName, string pWord, double lX, double lY, string newbio)
{
	userName = uName;
	password = pWord;
	locationX = lX;
	locationY = lY;
	bio = newbio;
}

User::~User()
{
}
