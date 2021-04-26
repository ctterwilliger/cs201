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
#include <iomanip>

size_t digit_s = pow(10, 3); // this is so we can have the larger numbers held in each vector, but not overflow when multipling, and ease of printing
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
	cout << std::setfill(' ');
	if (num.size() == 2)
	{
		cout  << num.at(1) << std::endl; 
	}
	else if (num.size() == 1)
	{
		cout << '0' << std::endl;
	}
	else
	{
		if (num.at(0) == -1)
		{
			cout << "-";
		}
		cout << std::setw(3) << num.at(num.size() - 1) << ",";
		for (int i = num.size() - 2; i >= 2; i--)
		{
			cout << std::setfill('0') << std::setw(3) << num.at(i) << ",";
		}
		cout << std::setfill('0') << std::setw(3) << num.at(1) << std::endl;
	}
}

void add_pos_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	for (int i = 1; i < min_size; i++)
	{
		result.push_back((num1.at(i) + num2.at(i) + place_holder) % digit_s);
		place_holder = (num1.at(i) + num2.at(i) + place_holder) / digit_s;
	}
	if (num1.size() < num2.size())
	{
		size_t size = num2.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num2.at(i) + place_holder) % digit_s);
			place_holder = (+num2.at(i) + place_holder) / digit_s;
		}
	}
	else if (num1.size() > num2.size())
	{
		size_t size = num1.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num1.at(i) + place_holder) % digit_s);
			place_holder = (num1.at(i) + place_holder) / digit_s;
		}
	}
	else if (place_holder != 0)
	{
		result.push_back(place_holder);
	}

}

void add_neg_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	int place_holder2 = 0;
	// 1 for num1 being bigger, -1 for num2 being bigger, 0 for equal
	int size_bool = 0;
	if (num1.size() < num2.size())
	{
		size_bool = -1;
		cout << "test";
	}
	else if (num1.size() > num2.size())
	{
		size_bool = 1; 
		
	}
	else
	{
		for(int j = min_size-1; j > 1; j--)
		{
			if (num1.at(j) < num2.at(j))
			{
				size_bool = -1;
				break;
			}
			else if (num1.at(j) > num2.at(j))
			{
				size_bool = 1;
				break; 
			}
		}
	}
	if (size_bool == 0)
	{
		result.resize(0);
		result.push_back(1);
	}
	if (size_bool==1)
	{
		
		for (int i = 1; i < min_size; i++)
		{
			place_holder2 = num1.at(i) - num2.at(i) + place_holder;
			if (place_holder2 < 0)
			{
				result.push_back((1000 + place_holder2) % digit_s);
				place_holder = -1;
			}
			else
			{
				result.push_back((place_holder2) % digit_s);
				place_holder = 0;
			}
		}
		if (num1.size() < num2.size())
		{
			size_t size = num2.size();
			for (int i = min_size; i < size; i++)
			{
				result.push_back((num2.at(i) + place_holder) % digit_s);
				place_holder = 0;
			}
		}
		else if (num1.size() > num2.size())
		{
			size_t size = num1.size();
			for (int i = min_size; i < size; i++)
			{
				place_holder2 = num1.at(i) + place_holder;
				if (place_holder2 < 0)
				{
					result.push_back((1000 + place_holder2) % digit_s);
					place_holder = 0;
				}
				else
				{
					result.push_back((place_holder2) % digit_s);
					place_holder = 0;
				}
			}
		}
		result.at(0) = -1;
	}
	else
	{
		for (int i = 1; i < min_size; i++)
		{
			place_holder2 = -num1.at(i) + num2.at(i) + place_holder;
			if (place_holder2 < 0)
			{
				result.push_back((1000 + place_holder2) % digit_s);
				place_holder = -1;
			}
			else
			{
				result.push_back((place_holder2) % digit_s);
				place_holder = 0;
			}
		}
		if (num1.size() < num2.size())
		{
			size_t size = num2.size();
			for (int i = min_size; i < size; i++)
			{
				result.push_back((num2.at(i) + place_holder) % digit_s);
				place_holder = 0;
			}
		}
		else if (num1.size() > num2.size())
		{
			size_t size = num1.size();
			for (int i = min_size; i < size; i++)
			{
				place_holder2 = -num1.at(i) + place_holder;
				if (place_holder2 < 0)
				{
					result.push_back((1000 + place_holder2) % digit_s);
				}
				else
				{
					result.push_back((place_holder2) % digit_s);
				}
				place_holder = -1;
			}
		}
		else if (place_holder != 0)
		{
			result.push_back(place_holder);
		}
		result.at(0) = 1;

	}
	for (int i = result.size() - 1; i >= 1; i--)
	{
		if (result.at(i) != 0)
		{
			break;
		}
		result.resize(i);
	}

}



void add_neg_neg_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	for (int i = 1; i < min_size; i++)
	{
		result.push_back((num1.at(i) + num2.at(i) + place_holder) % digit_s);
		place_holder = (num1.at(i) + num2.at(i) + place_holder) / digit_s;
	}
	if (num1.size() < num2.size())
	{
		size_t size = num2.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num2.at(i) + place_holder) % digit_s);
			place_holder = (+num2.at(i) + place_holder) / digit_s;
		}
	}
	else if (num1.size() > num2.size())
	{
		size_t size = num1.size();
		for (int i = min_size; i < size; i++)
		{
			result.push_back((num1.at(i) + place_holder) % digit_s);
			place_holder = (num1.at(i) + place_holder) / digit_s;
		}
	}
	else if (place_holder != 0)
	{
		result.push_back(place_holder);
	}
	result.at(0) = -1; 


}

// This takes up more space than a generalized add function. but the slight alterations make it faster than generalization, especially over a million+ elelemnts 
void add_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	if (num1.at(0) == 1 && num2.at(0) == 1)
	{
		add_pos_pos_vector(num1, num2, result);
	}
	else if (num1.at(0) == -1 && num2.at(0) == 1)
	{
		add_neg_pos_vector(num1, num2, result);
	}
	else if (num1.at(0) == -1 && num2.at(0) == -1)
	{
		add_neg_neg_vector(num1, num2, result);
	}
	else if (num1.at(0) == 1 && num2.at(0) == -1)
	{
		add_neg_pos_vector(num2, num1, result);
	}
	
}

void sub_vectors(const std::vector<int>& num1, std::vector<int>& num2, std::vector<int>& result)
{
	num2.at(0) = -num2.at(0);
	add_vectors(num1, num2, result);
}

void mult_vectors(const std::vector<int>& num1, std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	int place_holder2; 
	for (int i = 1; i < num2.size(); i++)
	{
		int place_holder = 0;
		for (int j = 1; j < num1.size(); j++)
		{
			if (result.size() < i + j)
			{
				place_holder2 = num1.at(j) * num2.at(i) + place_holder;
				result.push_back(place_holder2 % digit_s);
				place_holder = (place_holder2) / digit_s;
				
			}
			else
			{
				place_holder2 = num1.at(j) * num2.at(i) + place_holder + result.at(i + j - 1);
				result.at(i + j - 1) = (place_holder2) % digit_s;
				place_holder = (place_holder2) / digit_s;

			}
			
		}
		if (place_holder != 0)
		{
			result.push_back(place_holder);
		}


	}
	if (num1.at(0) != num2.at(0))
	{
		result.at(0) = -1;
	}
}

void pow_vectors(const std::vector<int>& num1, int pow, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	std:vector<int> midpoint_vector{ 1,1 };
	for(int i = 0; i < pow; i++)
	{
		mult_vectors(num1, midpoint_vector, result);
		midpoint_vector.resize(0);
		for (int j = 0; j < result.size(); j++)
		{
			midpoint_vector.push_back(result.at(j));
		}
		cout << i << std::endl; 
	}
	vector_create(1, midpoint_vector);

	
}

void divide_vectors(const std::vector<int>& num1, const std::vector<int> & num2, std::vector<int>& result, std::vector<int>& remander)
{
	result.resize(0);
	result.push_back(1);
	remander.resize(0);
	
	std::vector<int> place_holder_vector;
	for (auto n : num1)
	{
		remander.push_back(n);
	}
	remander.at(0) = 1;
	std::vector<int> one;
	vector_create(1, one);
	while (remander.at(0) == 1)
	{
		add_vectors(result, one,place_holder_vector);
		result.resize(0);
		for (auto n : place_holder_vector)
	{
		result.push_back(n);
	}
		add_neg_pos_vector( num2, remander, place_holder_vector);
		remander.resize(0);
		for (auto n : place_holder_vector)
		{
			remander.push_back(n);
		}
	}
	add_neg_pos_vector(remander, num2, place_holder_vector);
	remander.resize(0);
	for (auto n : place_holder_vector)
	{
		remander.push_back(n);
	}
	add_neg_pos_vector( one, result, place_holder_vector);
	result.resize(0);
	for (auto n : place_holder_vector)
	{
		result.push_back(n);
	}
	

}

