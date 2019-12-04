#include<iostream>
using namespace std;


template <class T>
class My_shared_ptr
{
private:
	T* m_obj;
	int* count;
public:
	My_shared_ptr(): m_obj(NULL), count(NULL)
	{
	
	}

	My_shared_ptr(T* obj)
	{
		this->m_obj = obj;
		this->count = new int(1);
	}

	My_shared_ptr(const My_shared_ptr& rhs)//copy constructor.
	{
		this->m_obj = rhs.m_obj;
		this->count = rhs.count;
		this->increase();
	}

	~My_shared_ptr() {
		this->decrease();
		if (this->getCount() == 0)
			if (getCount() == 0)
				cout << "everything destroyed" << endl;
	}


	int getCount() {
		return (this->count == NULL) ? 0 : *(this->count);
	}

	void increase() {
		if (this->count == NULL) {
			this->count = new int(1);
		}
		else {
			(*this->count)++;
		}
	}
	void decrease() {
		(*this->count)--;
		if (*(this->count) == 0) {
			delete this->m_obj;
			delete this->count;
			this->count = NULL;
			this->m_obj = NULL;

		}
	}
	My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs)
	{

		if (this->m_obj != NULL)
			decrease();
		this->m_obj = rhs.m_obj;
		this->count = rhs.count;
		this->increase();
		return *this;
	}

	const T* get_m_obj()
	{
		return m_obj;
	}


};

typedef unsigned long T;
int main()
{
	{
		My_shared_ptr<T> a;
		cout << a.getCount() << endl;
		{
			My_shared_ptr<T> b(new T(5));
			cout << a.getCount() << endl;
			cout << b.getCount() << endl;

			if (a.get_m_obj() == b.get_m_obj())
				cout << "resource shared" << endl;

			a = b;//assignment operation
			cout << a.getCount() << endl;
			cout << b.getCount() << endl;

			if (a.get_m_obj() == b.get_m_obj())
				cout << "resource shared" << endl;
		}
		cout << a.getCount() << endl;
	}
	return 0;
}
