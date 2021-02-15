#include <iostream>

template <typename T>
class Vector
{
private:
	int size;
	int capacity;
	T* arr;

public:
	Vector();
	~Vector();

	void push_back(T);
	int get_size() const;
	void pop_back();

	T& operator[](int);

	template <typename U>
	friend std::ostream& operator <<(std::ostream&, const Vector<U>&);
};

class Out_of_bounds
{
public:
	Out_of_bounds()
	{
		std::cout << "Array index out of bounds";
	}
};

