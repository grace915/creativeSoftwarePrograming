#include <string>
#include <string.h>
#include <iostream>
#include "reply_admin.h"
#define NUM_OF_CHAT 200
using namespace std;

ReplyAdmin::ReplyAdmin() {
	chats = new string[NUM_OF_CHAT];
	num = 0;
}
ReplyAdmin ::~ReplyAdmin() {
	delete[] chats;
}

int ReplyAdmin::getChatCount() {

	return num;
}

bool ReplyAdmin::addChat(string _chat) {
	if (getChatCount() >= 200)
		return false;
	else {
		num++;
		chats[getChatCount()-1] = _chat;
		
	
		return true;
	}

}
bool ReplyAdmin::removeChat(int _index) {
	if (_index < 0 || _index >= num) {
		return false;
	}
	else {
		for (int i = _index; i < num ; i++) {
			if (chats[i+ 1].empty() == 1) {
				chats[i].clear();
			}
			else {
				chats[i] = chats[i + 1];
			}
		}
		num--;

		return true;
	}
}
bool ReplyAdmin :: removeChat(int _start, int _end) {
	if (_start < 0 || _end >= num) {
		return false;
	}
	else {
		for (int i = _start; i <= _end; i++) {
			removeChat(_start);
		}
		

		return true;
	}

}

void ReplyAdmin::printChat() {
	for (int i = 0; i < num; i++)
		cout <<i<<" : "<< chats[i] << endl;
}

	
