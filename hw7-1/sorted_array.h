#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <sstream>
using namespace std;


class SortedArray {
public:
	SortedArray();
	~SortedArray();

	void AddNumber(int num);

	vector<int> GetSortedAscending() const;
	vector<int> GetSortedDescending() const;
	int GetMax() const;
	int GetMin() const;

private:
	std::vector<int> numbers_;
};
