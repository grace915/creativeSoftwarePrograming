#include <iostream>
#include <string>
#include <cstdlib>
#include "reply_admin.h"
using namespace std;

int main() {


	ReplyAdmin r;

	
	while (1) {
		string check;
		string id;

		cin >> check;
	

		if (check == "#quit")
			return 0;
		
		else if (check == "#remove") {
			cin >> id;
			if (id.length()>1) {
				char back = id[2];

				r.removeChat(atoi(id.c_str()), atoi(&back));
				
			}
			else
				r.removeChat(atoi(id.c_str()));
		
		}
		else {
			r.addChat(check);
		}
		r.printChat();
		cout << endl;
	

	}
	return 0;
	
}
