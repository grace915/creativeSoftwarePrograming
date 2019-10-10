#pragma once

class Account {
private:

	int id;
	int balance;
public:
	Account();
	Account(int i);
	int getBalance() ;
	void deposit(int money);
	void withdraw(int money);
};

class accountManager {
private:
	Account* acc_array;
	int acc_num = 0;
public:
	accountManager();
	void create_new_account();
	void deposit(int acc_id, int money);
	void withdraw(int acc_id, int money);
	void transfer(int acc_id_from, int acc_id_to, int money);
	int getNum();
	int getBalance(int acc_id);
	Account* getAccount(int acc_id);
};
