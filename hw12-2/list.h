#pragma once
#include <iostream>
using namespace std;


template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node(T d) {
		data = d; next = NULL;
	}
};

template <class T>
class List {
private:
	Node<T>* head;
public:
	List(); // create an empty list, head = NULL;
	List(T* arr, int n_nodes);//create a list with n_nodes and initialize using arr
	bool isEmpty() const;
	void insert_at(int idx, T data); // assume 0 <= idx < n_size
	void remove_at(int idx); // assume 0 <= idx < n_size
	void pop_back(); // if list is empty, do nothing.
	void push_back(T val);
	void pop_front(); // if list is empty, do nothing.
	void push_front(T val);

	template <class T1>
	friend ostream& operator<<(ostream& out, const List<T1>& rhs);
};
