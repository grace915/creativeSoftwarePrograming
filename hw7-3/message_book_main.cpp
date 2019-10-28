#include "message_book.h"
int main(void) {
	MessageBook mb;
	
	while (1) {
		string line;
		int num;
		string str;
		cin >> line;


		if (line == "add") {
			cin >> num;
			
			getline(cin, str);
			mb.AddMessage(num, str.substr(1));
	
		}
		else if (line == "delete") {
			cin >> num;
			mb.DeleteMessage(num);

		}
		else if (line == "print") {
			cin >> num;
			string result = mb.GetMessage(num);
			cout << result << endl;


		}
		else if (line == "list") {
			std::vector<int> nums = mb.GetNumbers();
			for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
				string result = mb.GetMessage(*i);
				cout << *i << " : " << result << endl;
			}

		}
		else if (line == "quit") {
			return 0;
		}
	}
}
