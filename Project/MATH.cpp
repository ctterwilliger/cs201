/**
* MATH.ccp
* cs201
* Clifton Terwilliger
* 04/25/2021
* Control for math_functions
*/
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include "Math_functions.hpp"
#include <string>
using std::cout;
using std::cin;
using std::vector; 


int main()
{
	vector<int> num;
	vector<int> num2;
	vector<int> result;
	vector<int> remander;
	cout << "This program takes int inputs from user and then stores and does opperations on it" << std::endl
		<< "Possible operations are ^, *, +, -, and / " << std::endl;
	int input;
	char operation;
	while (true)
	{
		cout << "Please enter integer 1(0 or non int to end): ";
		cin >> input;
		if (input == 0)
		{
			break;
		}
		else
		{
			vector_create(input, num);
		}

		cout << "Please enter an operations(^, *, +, - and /): ";
		cin >> operation;
		switch (operation) {
		case 94: //^
			cout << "Please enter positive integer 2: ";
			cin >> input;
			while (input < 0)
			{
				cout << "Please enter a positivie integer: ";
				cin >> input;
			}
			cout << "The result of the pow is: ";
			pow_vectors(num, input, result);
			print_vector(result);
			break;
		case 42:// *
			cout << "Please enter integer 2: ";
			cin >> input;
			vector_create(input, num2);
			mult_vectors(num, num2, result);
			print_vector(result);
			break;
		case 43: // +
			cout << "Please enter integer 2: ";
			cin >> input;
			vector_create(input, num2);
			add_vectors(num, num2, result);
			print_vector(result);
			break;
		case 45: // -
			cout << "Please enter integer 2: ";
			cin >> input;
			vector_create(input, num2);
			sub_vectors(num, num2, result);
			print_vector(result);
			break;
		case 47: // /
			cout << "Please enter integer 2: ";
			cin >> input;
			vector_create(input, num2);
			divide_vectors(num, num2, result, remander);
			print_vector(result);
			print_vector(remander);
			break;
		}

	}
	cout << std::endl;
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
