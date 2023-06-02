#pragma once
#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
	Vector();
	Vector(int size);
	Vector(int size, T value);
	Vector(const Vector<T>& object);
	~Vector();

	Vector<T>& operator=(const Vector<T>& object);
	T& operator[](int index);
	Vector<T> operator+(const T value);
	int operator()();

	friend ostream& operator<< <>(ostream& out, const Vector<T>& object);
	friend istream& operator>> <>(istream& in, Vector<T>& object);
private:
	T* data;
	int size;
};

template<class T>
Vector<T>::Vector() : data(nullptr), size(0) {}

template<class T>
Vector<T>::Vector(int size)
{
	this->size = size;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = T();
	}
}

template<class T>
Vector<T>::Vector(int size, T value)
{
	this->size = size;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = value;
	}
}

template<class T>
Vector<T>::Vector(const Vector<T>& object)
{
	this->size = object.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = object.data[i];
	}
}

template<class T>
Vector<T>::~Vector()
{
	this->size = 0;
	delete[] this->data;
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& object)
{
	if (this != &object)
	{
		this->size = object.size;
		if (data != nullptr) delete[] this->data;
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = object.data[i];
		}
	}
	return *this;
}

template<class T>
T& Vector<T>::operator[](int index)
{
	if (index > this->size || index < 0) throw exception("Выход за пределы вектора!");
	return this->data[index];
}

template<class T>
Vector<T> Vector<T>::operator+(const T value)
{
	Vector<T> temp(*this);
	for (int i = 0; i < temp.size; i++)
	{
		temp.data[i] += value;
	}
	return temp;
}

template<class T>
int Vector<T>::operator()()
{
	return this->size;
}

template <class T>
ostream& operator<< (ostream& out, const Vector<T>& object)
{
	out << "Содержимое вектора: ";
	for (int i = 0; i < object.size; i++)
	{
		out << object.data[i] << " ";
	}
	return out;
}

template <class T>
istream& operator>> (istream& in, Vector<T>& object)
{
	for (int i = 0; i < object.size; i++)
	{
		cout << "Введите элемент вектора под номером " << i <<": ";
		T temp;
		in >> temp;
		object.data[i] = temp;
	}
	return in;
}

#endif // !_VECTOR_H_
