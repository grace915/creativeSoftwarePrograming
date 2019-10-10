
#include <iostream>
#include "simple_account.h"
using namespace std;

Account::Account() {
	this->id = -1;
	this->balance = 0;

}
Account::Account(int i) {
	this->id = i;
	this->balance = 0;

}
int Account::getBalance() {
	
	return this->balance;
}
void Account::deposit(int money) {
	this->balance += money;
	
}
void Account::withdraw(int money) {
	this->balance -= money;
	
}

accountManager::accountManager() {
	this->acc_array = new Account[10];
	this->acc_num = 0;
}
void accountManager::create_new_account() {
	
	int current = this->acc_num;
	this->acc_num++;
	Account account(current);
	this->acc_array[current] = account;
	

	
}void accountManager::deposit(int acc_id, int money) {
	int* moneyList = new int[acc_num];
	getAccount(acc_id)->deposit(money);





}
void accountManager::withdraw(int acc_id, int money) {
	int* moneyList = new int[acc_num];
	getAccount(acc_id)->withdraw(money);
	



}
void accountManager::transfer(int acc_id_from, int acc_id_to, int money) {
	int* moneyList = new int[acc_num];
	getAccount(acc_id_from)->withdraw(money);
	getAccount(acc_id_to)->deposit(money);



		
}
int accountManager::getNum() {
	return this->acc_num - 1;

}
Account* accountManager::getAccount(int id) {
	return &this->acc_array[id];
}
int accountManager::getBalance(int id) {
	return getAccount(id)->getBalance();
}
