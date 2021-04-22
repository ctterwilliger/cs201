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
		num.push_back(-1);
	}
	else
	{
		num.push_back(1);
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
	if (num.at(0) == -1)
	{
		cout << "-";
	}
	for (int i = num.size() - 1; i >= 1; i--)
	{
		cout << num.at(i) << " ";
	}
}

void add_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	for (int i = 1; i < min_size; i++)
	{
		result.push_back((num1.at(i) + num2.at(i) + place_holder) % digit_s);
		place_holder = (num1.at(i) + num2.at(i) + place_holder)/digit_s;
	}
	if (num1.size() < num2.size())
	{
		size_t size = num2.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num2.at(i) + place_holder) % digit_s);
			place_holder = ( + num2.at(i) + place_holder) / digit_s;
		}
	}
	else if (num1.size() > num2.size())
	{
		size_t size = num1.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num1.at(i) + place_holder) % digit_s);
			place_holder = (num1.at(i)  + place_holder) / digit_s;
		}
	}
	else if(place_holder != 0)
	{
		result.push_back(place_holder);
	}

}
int main()
{
	vector<int> num;
	vector<int> num2;
	vector<int> result;
	int i = 123456789;
	int j = 987654321;
	vector_create(i, num);
	vector_create(j, num2);
	add_vectors(num, num2, result);
	print_vector(result);
	cout << std::endl; 

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
