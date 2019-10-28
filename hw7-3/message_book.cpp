#include "message_book.h"

MessageBook::MessageBook(){
	
}
MessageBook::~MessageBook() {
	
}
void MessageBook::AddMessage(int _number, const string& _message) {
	messages_[_number] = _message;


}
void MessageBook::DeleteMessage(int _number) {
	messages_.erase(_number);
}
vector<int> MessageBook::GetNumbers ()const{
	std::vector<int> result;

	for (map<int, string>::const_iterator i = this->messages_.begin(); i != this->messages_.end(); i++)
		result.push_back(i->first);

	return result;

	
}


const string& MessageBook::GetMessage(int _number) const {
	map<int, string>::const_iterator i = this->messages_.find(_number);
	return i->second;

}

