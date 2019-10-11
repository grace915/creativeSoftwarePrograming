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

		getline(cin,check);
	

		if (check == "#quit")
			return 0;
		
		else if (check.find( "#remove")!= string::npos) {
			id = check.substr(8);
			if (id.length()>1) {
				if(id[0] == '-'){
					if(id.length() ==2 ){
						r.removeChat(-atoi(id.c_str()));
					}else if(id[3] != '-'){
						r.removeChat(0,atoi(&id[3]));
				}
				}
				else {
					r.removeChat(atoi(id.c_str()), atoi(&id[2]));
				}
			}
			else if(id.length() == 1)
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
