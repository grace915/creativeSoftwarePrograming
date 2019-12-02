#include "list.h"


template<class T>
List<T>::List() {

	head = NULL;

}
template<class T>
List<T>::List(T* arr, int n_nodes) {

	head = NULL;
	for (int i = 0; i < n_nodes; i++) {
		this->push_back(arr[i]);
	}

	/*
	if (n_nodes) {
		head = Node<T>(arr[0]);//arr[0]을 넣고
		Node<T>* before = head;//그전게 머리가 되고
		for (int i = 1; i < n_nodes; i++) {
			before->next = Node<T>(arr[i]);//arr수만큼  넣는데, before의 다음 에 넣고
			before = before->next;// 그전께 다음꺼가 된다.
		}
	}
	else {
		this->head = NULL;
	}*/
	// .list.cc.swp
}
template<class T>
bool List<T>::isEmpty()const {
	if (head == NULL)
		return 1;
	else
		return 0;
}

template<class T>
void List<T>::insert_at(int idx, T data) {
	if (idx == 0) {
		push_front(data);
		return;
	}
	if (head == NULL)
		return;

	Node<T> * newnode = new Node<T>(data);
	Node<T> * seek = head;
	int chk = 0;
	while (seek != NULL) {
		chk++;
		if (chk == idx) {
			newnode->next = seek->next;
			seek->next = newnode;
			break;
		}
		seek = seek->next;
	}


}
template<class T>
void List<T>::remove_at(int idx) {
	if (head == NULL) {
		return;
	}
	if (idx == 0) {
		pop_front();
		return;
	}
	else  /*(idx > 0 && idx <= size() - 1) */ {
		Node<T>* temp = head;
		Node<T>* target = head;
		for (int i = 1; i <= idx - 1; i++) {
			temp = temp->next;
			target = target->next;
		}
		temp =  temp->next;
		target->next = target->next->next;

		delete temp;
	}
}
template<class T>
void List<T>::pop_back() {
	if (head == NULL) {

	}
	else {
		Node<T>* before = NULL;
		Node<T>* now = head;
		for (Node<T>* ptr = head; ptr != NULL; ptr = ptr->next) {
			before = now;
			now = ptr;
		}
		before->next = NULL;
		if (now == head) {
			head = NULL;
		}
		delete now;
	}
}
template<class T>
void List<T>::push_back(T val) {

	Node<T>* newNode = new Node<T>(val);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node<T>* now = head;
		for (Node<T>* ptr = head; ptr != NULL; ptr = ptr->next) {
			now = ptr;
		}
		now->next = newNode;
		
	}

}
template<class T>
void List<T>::pop_front() {
	if (head == NULL) {

		return;
	}
	Node<T>* seek = head->next;
	Node<T>* prev = head;
	delete prev;
	head = seek;


}
template<class T>
void List<T>::push_front(T val) {
	Node<T>* newNode = new Node<T>(val);
	newNode->next = this->head;
	this->head = newNode;

}
template<class T1>
ostream& operator<<(ostream & out, const List<T1> & rhs) {
	Node<T1>* seek;
	seek = rhs.head;
	while (seek != NULL) {
		out << seek->data;
		seek = seek->next;

		if (seek == NULL) {

		}
		else {
			out << ", ";
		}
	}
	return out;

}
