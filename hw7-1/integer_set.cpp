#include "integer_set.h"

IntegerSet::IntegerSet(){}
IntegerSet::~IntegerSet(){}

void IntegerSet::AddNumber(int num) {
	
	int check = 0;
	for (int i = 0; i < numbers_.size(); i++) {
		if (numbers_[i] == num) {
			check = 1;
			break;
		}
	}
	if (check == 0) {
		numbers_.push_back(num);
		
	}
	sort(numbers_.begin(), numbers_.end());
	
	for (int i = 0; i < numbers_.size(); i++)
		cout << numbers_[i] << " ";
	cout << endl;
	

}
void IntegerSet::DeleteNumber(int num) {
	for (int i = 0; i < numbers_.size(); i++) {
		if (numbers_[i] == num)
			numbers_.erase(numbers_.begin() + i);
	}
	for (int i = 0; i < numbers_.size(); i++)
		cout << numbers_[i] << " ";
	cout << endl;
	
}
int IntegerSet::GetItem(int pos)const{
	if (pos > numbers_.size())
		return -1;
	else {
		return numbers_[pos];
	}

}



