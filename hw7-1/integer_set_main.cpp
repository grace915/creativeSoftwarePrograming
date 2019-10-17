#include "integer_set.h"

int main(void) {

	string line;
	IntegerSet ints;

	while (1) {
		getline(cin, line);
		
		if (line == "quit")
			return 0;
		else if (line.find("add") != string::npos) {

			ints.AddNumber(atoi(&line[4]));

		}
		else if (line.find("get") != string::npos) {
			int x;
			x = ints.GetItem(atoi(&line[4]));
			cout << x << endl;
		}
		
		else if (line.find("del") != string::npos)
			ints.DeleteNumber(atoi(&line[4]));


	}
}
