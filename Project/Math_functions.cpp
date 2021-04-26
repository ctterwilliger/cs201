/**
* math_functions.ccp
* cs201
* Clifton Terwilliger
* 04/25/2021
* calculation functions for vector of ints
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


// creates a vector with an int, using vector.at(0) as the sign for positive and negative
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
// prints a vector that uses standard
void print_vector(const std::vector<int>& num)
{
	cout << std::setfill(' ');
	//checks for size and handles acordingly
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


//simply adds two positive vectors
void add_pos_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	// adds vectors until it made the min size of both vectors
	size_t min_size = std::min(num1.size(), num2.size());
	int place_holder = 0;
	for (int i = 1; i < min_size; i++)
	{
		result.push_back((num1.at(i) + num2.at(i) + place_holder) % digit_s);
		place_holder = (num1.at(i) + num2.at(i) + place_holder) / digit_s;
	}

	// checks which vector is bigger and then iterate through it adding the placeholder just in case it overflows from
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
	// if equivelent moves carries over place_holder
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
	//checks which number has a larger absolute value
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

	// adds based on which one is larger
	// if equivelent
	if (size_bool == 0)
	{
		result.resize(0);
		result.push_back(1);
	}
	//num 2 is larger
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
	//num2 is larger
	else
	{
		//these are similar to add_pos_pos_vectors
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
	//removes 0s at front of vector tofix logic erros
	for (int i = result.size() - 1; i >= 1; i--)
	{
		if (result.at(i) != 0)
		{
			break;
		}
		result.resize(i);
	}

}


// same function as add pos_pos but makes it negative at the end
void add_neg_neg_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	// same codes as add_pos_pos_vectors but flips the sign bit
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
// This functions is a generalization of all the add functions to make a true add function, this allows the use of the specialized functions in the other functions
void add_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	//controls based on integer signs
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

//this runs the add function, but with num2 being negative
void sub_vectors(const std::vector<int>& num1, std::vector<int> num2 , std::vector<int>& result)
{
	num2.at(0) = -num2.at(0);
	add_vectors(num1, num2, result);
}


//multplies two vectors
void mult_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result)
{
	result.resize(0);
	result.push_back(1);
	int place_holder2; 
	for (int i = 1; i < num2.size(); i++)
	{
		int place_holder = 0;
		//multiplies element j * i then adds to result
		for (int j = 1; j < num1.size(); j++)
		{
			//pushes back vector is postition does exist, if not adds to result
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
	//creates sign based on orignal bits
	if (num1.at(0) != num2.at(0))
	{
		result.at(0) = -1;
	}
}

// runs the multiply function pow number of times
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
	}
	vector_create(1, midpoint_vector);

	
}

//subtracts until value is the oposite sign of origanal value and counts how many times (WARNIGN DOES NOT EXCEPT 0 as Divisor)
void divide_vectors(const std::vector<int>& num1, const std::vector<int> & num2, std::vector<int>& result, std::vector<int>& remander)
{
	if (num2.size() == 2 && num2.at(1) == 0)
	{
		cout << "Error 0 divisor" <<std::endl;
		exit(1);
	}
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
	// subtracts until negative
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
	//goes back one step
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

	//corrects sign
	if (num1.at(0) != num2.at(0))
	{
		result.at(0) = -1;
	}
	

}

