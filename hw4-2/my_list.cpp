
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<fstream>
#include <string>
#include<string.h>
using namespace std;

struct Item
{
	string name;
	string age;
	string id;
	string* subjects= NULL;
	struct Item* next = NULL;

};

bool is_first = true;
struct Item* first;

string* split(const string& str, const string& delim) {
	string* string_list = new string[10];

	int idx = 0;
	char* token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
	while (token != NULL) {
		string_list[idx] = token;
		token = strtok(NULL, delim.c_str());
		++idx;
	}
	return string_list;
}


struct Item* create_item() {

	return new Item;

};

void insert_item(struct Item* prev_item, struct Item* item) {
	prev_item->next = item;
}

int main(void) {
	
	ifstream fin;
	fin.open("input.txt");
	string line;
	string sub;
	
	
	while (fin >> line) {
		string* line_split = split(line, ":");

		struct Item* person = create_item();

		person->name = line_split[0];
		person->age = line_split[1];
		person->id = line_split[2];
		
		person->subjects = split(line_split[3], ",");
		
	
		
		if (is_first) {
			first = person;
			is_first = false;
		}
		else {

			struct Item* now = first, * before;
			while (true) {
				if (now->next == NULL) {
					before = now;
					break;
				}
				now = now->next;
			}

			insert_item(before, person);

		}
		
	}
	
	fin.close();

	struct Item* now = first;
	while (true) {
		sub = now->id.substr(0,4);
		if (sub == "2013") {
			cout << now->name << "(" << now->id << ") : ";
			for (int i = 0; i < 10; i++) {
				cout << now->subjects[i];
				if (now->subjects[i + 1].length() > 0)
					cout << "&";
				else
					break;
				
			}
			
			cout << endl;
		
			if (now->next == NULL) break;
			now = now->next;
		}
		else
			break;
	}

	return 0;

}

