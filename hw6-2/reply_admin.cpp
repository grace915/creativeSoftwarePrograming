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
	if (_index < 0 || _index >= getChatCount()){
		return false;
		}
	else {
		for (int i = _index; i < getChatCount() ; i++) {
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
	int a = getChatCount();
	if (_start < 0 ){
		for(int i = 0; i<=_end; i++){
			removeChat(0);		
	}
		
	}else if( _end >= getChatCount()){
		for(int i = _start ; i<= a; i++){
		
			removeChat(_start);	
		}
	}else if(_start<0 && _end >=getChatCount()){
		for(int i = 0; i<= a; i++)	
			chats[i].clear();
	}
	else {
		for (int i = _start; i <= _end; i++) {
			removeChat(_start);
		}
		

		return true;
	}

}

void ReplyAdmin::printChat() {
	for (int i = 0; i < getChatCount(); i++)
		cout <<i<<" : "<< chats[i] << endl;
}

	
