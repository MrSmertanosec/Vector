#include <iostream>
#include "Vector.h"

template <typename T>
Vector<T>::Vector()
{
	this->size = 0;
	this->capacity = 1;
	arr = new T[capacity];
}

template <typename T>
Vector<T>::~Vector()
{
	delete[] this->arr;
}

template <typename T>
void Vector<T>::push_back(T val)
{
	if (size == capacity)
	{
		this->capacity *= 2;
		T* temp = new T[this->capacity];

		for (int i = 0; i < size; ++i)
		{
			temp[i] = arr[i];
		}

		delete[] arr;
		arr = temp;
	}

	this->arr[size++] = val;
}

template <typename T>
int Vector<T>::get_size() const
{
	return this->size;
}

template <typename T>
void Vector<T>::pop_back()
{
	--this->size;
}

template <typename T>
T& Vector<T>::operator[](int index)
{
	if (index < size && index >= 0)
	{
		return this->arr[index];
	}

	throw Out_of_bounds();
}

template <typename U>
std::ostream& operator <<(std::ostream& os, const Vector<U>& vec)
{
	for (int i = 0; i < vec.size; ++i)
	{
		std::cout << vec.arr[i] << " ";
	}

	std::cout << "\n";

	return os;
}