
#include "sorted_array.h"

SortedArray::SortedArray() { 
	
}
SortedArray::~SortedArray() {}

void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);

}

vector<int> SortedArray ::GetSortedAscending() const{
	vector<int> c = numbers_;
	sort(c.begin(), c.end());
	return c;

}
vector<int> SortedArray::GetSortedDescending() const{
	vector<int> c = numbers_;
	sort(c.begin(), c.end(), greater<int>());
	return c;
}
int SortedArray::GetMax() const{
	vector<int> c = numbers_;
	sort(c.begin(), c.end());

	int max = c.back();
	return max;

}
int SortedArray::GetMin() const{
	vector<int> c = numbers_;
	sort(c.begin(), c.end());
	int min = c.front();
	return min;
}
