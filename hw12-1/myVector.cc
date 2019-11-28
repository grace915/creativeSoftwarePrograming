
#include "myContainer.cc"
#include "myVector.h"
//#include "myContainer.h"
#include <iostream>

template <typename T>
MyVector<T>::MyVector()
	:MyContainer<T>()
{
	capacity = this->n_ele;
}


template <typename T>
MyVector<T>::MyVector(int n)
	: MyContainer<T>(n) 
{
	

	this->capacity = this->n_ele;

}

template <typename T>
MyVector<T>::MyVector(T* arr, int n)
	: MyContainer<T>(arr, n)
{
	this->capacity = n;

}

template <typename T>
bool MyVector<T>::empty()
{
	
	if (this->obj_arr == 0)
		return 1;
	else
		return 0;
}

template <typename T>
int MyVector<T>::size()

{
	
	return this->n_ele;
}

template <typename T>
int MyVector<T>::max_size()
{
	return this->capacity;
}

template <typename T>
void MyVector<T>::reserve(int new_cap)
{
	
	if (capacity < new_cap) {
		capacity = new_cap;
		T* arr = new T[capacity];
		for (int i = 0; i < this->n_ele; i++) {
			arr[i] = this->obj_arr[i];
		}
		this->obj_arr = arr;

	}
}

template <typename T>
void MyVector<T>::push_back(T obj)
{

	
	if (this->n_ele == capacity) {
		if (capacity == 0)
			this->reserve(1);
		else
			this->reserve(capacity * 2);
	
	}
	

	this->obj_arr[this->n_ele] = obj;
	this->n_ele++;
	
}

template <typename T>
void MyVector<T>::pop_back()
{
	delete this->obj_arr[this->n_ele];
	this->n_ele--;
}

template <typename T>
T& MyVector<T>::front()
{
	
	return this->obj_arr[0];
}

template <typename T>
T& MyVector<T>::back()
{

	return this->obj_arr[this->n_ele-1];
}

template <typename T>
T& MyVector<T>::at(int idx)
{
	
	return this->obj_arr[idx];
}

template <typename T>
T& MyVector<T>::operator[](const int& i)
{
	
	return this->obj_arr[i];
}

template <typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs)
{
	int newlen = this->n_ele + rhs.size();
	T* arr = new T[newlen];

	for (int i=0; i < this->n_ele; i++) {
		arr[i] = this->obj_arr[i];
	}

	for (int i = 0; i < rhs.n_ele; i++) {
		arr[i] = (rhs.obj_arr[i]);
	}
	MyVector<T> a(arr, newlen);

	return a;
}

