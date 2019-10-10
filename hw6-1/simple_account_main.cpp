
#include <iostream>
#include "simple_account.h"
using namespace std;

int main(void) {

	accountManager ac;

	while (1) {
		cout << "Job?" << endl;
		char id;
		cin >> id;
		if (id == 'q' || id == 'Q')
			break;
		else if (id == 'n' || id == 'N') {
			if (ac.getNum() >= 9) {
				cout << "10 account exitsts" << endl << endl;
				continue;
			}

			ac.create_new_account();
			int acc_id;
			acc_id = ac.getNum();
			cout << "Account for user " << acc_id << " registered" << endl
				<< "Balance of user " << acc_id << " : " <<ac.getBalance(acc_id) << endl<<endl;


		}
		else if (id == 'd' || id == 'D') {
			int acc_id;
			int money;
			cin >> acc_id >> money;
			if (acc_id > ac.getNum()) {
				cout << "Account does not exist" << endl << endl;
				continue;
			}
			if (ac.getBalance(acc_id) + money > 1000000) {
				cout << "Failure : Deposit to user " << acc_id << " " << money << endl
					<< "Balance of user " << acc_id << " : " << ac.getBalance(acc_id) << endl << endl;

			}
			else {
				ac.deposit(acc_id, money);
				cout << "Success: Deposit to user " << acc_id << " " << money << endl
					<< "Balance of user " << acc_id << " : " << ac.getBalance(acc_id) << endl << endl;
			}
		}
		else if (id == 'W' || id == 'w') {
			int acc_id;
			int money;
			cin >> acc_id;
			cin >> money;
			if (acc_id > ac.getNum()) {
				cout << "Account does not exist" << endl << endl;
				continue;
			}
			if (ac.getBalance(acc_id) >= money) {
				ac.withdraw(acc_id, money);
				cout << "Success : Withdraw from user " << acc_id << " " << money << endl
					<< "Balance of user " << acc_id << " : " << ac.getBalance(acc_id) << endl << endl;
			}
			else {
				cout << "Failure : Withdraw to user " << acc_id << " " << money << endl
					<< "Balance of user " << acc_id << " : " << ac.getBalance(acc_id) << endl << endl;
			}
		}
		else if (id == 't' || id == 'T') {
			int acc_id_from, acc_id_to, money;
			cin >> acc_id_from;
			cin >> acc_id_to;
			cin >> money;
			if (acc_id_from > ac.getNum() || acc_id_to > ac.getNum()) {
				cout << "Account does not exist" << endl << endl;
				continue;
			}
			if (ac.getBalance(acc_id_from) >= money && ac.getBalance(acc_id_to) + money < 1000000) {
				ac.transfer(acc_id_from, acc_id_to, money);
				cout << "Success: Transfer from user " << acc_id_from << " to user " << acc_id_to << " " << money << endl
					<< "Balance of user " << acc_id_from << " : " << ac.getBalance(acc_id_from) << endl
					<< "Balance of user " << acc_id_to << " : " << ac.getBalance(acc_id_to) << endl << endl;

			}
			else {
				cout << "Failure : Transfer from user " << acc_id_from << " to user " << acc_id_to<< " " <<money << endl
					<< "Balance of user " << acc_id_from << " : " << ac.getBalance(acc_id_from) << endl << endl
					<< "Balance of user " << acc_id_to << " : " << ac.getBalance(acc_id_to) << endl << endl;;
			}
		}




	}
}
