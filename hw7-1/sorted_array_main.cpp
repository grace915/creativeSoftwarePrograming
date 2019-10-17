#include "sorted_array.h"


int main() {
	string line;
	vector<int> vec;
	SortedArray sortAr;

	while (1) {

		getline(cin, line);

		if (line == "quit")
			break;
		else if (line == "ascend") {

			vec = sortAr.GetSortedAscending();
			for (int i = 0; i < vec.size(); i++) {
				cout << vec[i]<< " ";
			}
			cout << endl;
		}
		
		else if (line == "descend") {
			vec = sortAr.GetSortedDescending();
			for (int i = 0; i < vec.size(); i++) {
				cout << vec[i] << " ";

			}
			cout << endl;
		}
	

		else if (line=="max") {
			int max = sortAr.GetMax();
				cout << max << endl;
				}
		else if (line == "min") {


			int min = sortAr.GetMin();
				cout << min << endl;
				}
		else {
			stringstream ss(line);
			string temp;
			while (ss >> temp) {
				const char* t = temp.c_str();
				sortAr.AddNumber(atoi(t));
			}

		}

	}
}
