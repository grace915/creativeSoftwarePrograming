
#include "simple_int_set.h"

int main() {

	while (1) {
		
		set<int> s;
		set<int> s0;
		set<int> s1;
		string line;

		getline(cin, line);
		


		if (line == "0") return 0;

		else {
			if (line.find("+") != string::npos) {
				for (int i = 0; i < line.find("+"); i++) {
					if (atoi(&line[i]) != 0 || &line[i] == "0") { //  || &line[i] != " "

						s0.insert(atoi(&line[i]));

					}
				}
				for (int i = line.find("+"); i < line.size(); i++) {
					if (atoi(&line[i]) != 0 || &line[i] == "0") {

						s1.insert(atoi(&line[i]));
					}
				}

				s = SetIntersection(s0, s1);
			}
			else if (line.find("-",line.find("}")) != string::npos) {
				
				for (int i = 0; i < line.find("-",line.find("}")); i++) {
					if (atoi(&line[i]) != 0 || &line[i] == "0") {
						if (line[i - 1] == '-')
							s0.insert(-atoi(&line[i]));
						else
							s0.insert(atoi(&line[i]));
					}
				}
				for (int i = line.find("-",line.find("}")); i < line.size(); i++) {

					if (atoi(&line[i]) != 0 || &line[i] == "0") {
						if (line[i - 1] == '-')
							s1.insert(-atoi(&line[i]));
						else
							s1.insert(atoi(&line[i]));
					}
				}
				s = SetDifference(s0, s1);

			}
			else if (line.find("*") != string::npos) {
				for (int i = 0; i < line.find("*"); i++) {
					
					if (atoi(&line[i]) != 0 || &line[i] == "0") {
						if (line[i - 1] == '-')
							s0.insert(-atoi(&line[i]));
						else

							s0.insert(atoi(&line[i]));
					}
				}
				for (int i = line.find("*"); i < line.size(); i++) {
					
					if (atoi(&line[i]) != 0 || &line[i] == "0") {
						if (line[i - 1] == '-')
							s1.insert(-atoi(&line[i]));
						else 
							s1.insert(atoi(&line[i]));
					}
				}
				s = SetUnion(s0, s1);
			}

			cout << "{";
			for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it) {
				cout << " " << *it;
			}
			cout << " }" << endl;
		}
	}

}
