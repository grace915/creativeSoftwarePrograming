#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

class IntegerSet {
public:
	IntegerSet();
	~IntegerSet();

	void AddNumber(int num);
	void DeleteNumber(int num);

	int GetItem(int pos) const;

private:
	std::vector<int> numbers_;
};


