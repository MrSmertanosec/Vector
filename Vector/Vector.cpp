#include <iostream>
#include "Methods.cpp"

int main()
{
	Vector<int> vec;

	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);

	std::cout << vec;

	for (int i = 0; i < vec.get_size(); ++i)
	{
		std::cout << vec[i] << " ";
	}
	
	std::cout << "\n";
	vec.pop_back();
	
	for (int i = 0; i < vec.get_size(); ++i)
	{
		std::cout << vec[i] << " ";
	}

	try
	{
		std::cout << vec[20];
	}
	catch (Out_of_bounds ex)
	{

	}

	return 0;
}