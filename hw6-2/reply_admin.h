#pragma once
#include <string>
using namespace std;
class ReplyAdmin {
private:
	string* chats;
	int num;
public:
	
	ReplyAdmin();
	~ReplyAdmin();
	int getChatCount();
	bool addChat(string _chat);
	bool removeChat(int _index);
	bool removeChat(int _start, int _end);
	void printChat();
	   
};
