/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
size_t digit_s = pow(10, 4); // this is so we can have the largest possible numbers held in each vector, but not overflow when multipling
using std::cout;
using std::cin;
using std::vector; 

void vector_create(int i, std::vector<int>& num)
{
	num.resize(0);
	if (i < 0)
	{
		num.push_back(1);
	}
	else
	{
		num.push_back(0);
	}
	i = std::abs(i);
	while (i != 0)
	{
		num.push_back(i % digit_s);
		i = i / digit_s;
	}
}
void print_vector(const std::vector<int>& num)
{
	if (num.at(0) == 1)
	{
		cout << "-";
	}
	for (int i = num.size() - 1; i >= 1; i--)
	{
		cout << num.at(i) << " ";
	}
}

void add_vecctors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	for (int i = 0; i < min_size; i++)
	{
		result.push_back((num1.at(i) + num2.at(i) + place_holder) % digit_s);
		place_holder = num1.at(i) + num2.at(i) + place_holder;

	}
}
int main()
{
	vector<int> num;
	int i = -123456789;
	vector_create(i, num);
	print_vector(num);
	cout << std::endl; 

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
