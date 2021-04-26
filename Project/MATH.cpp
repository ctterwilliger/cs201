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
#include "Math_functions.hpp"// this is so we can have the largest possible numbers held in each vector, but not overflow when multipling
using std::cout;
using std::cin;
using std::vector; 


int main()
{
	vector<int> num;
	vector<int> num2;
	vector<int> result;
	vector<int> remander; 
	int i = -1234;
	int j = 4321;
	vector_create(i, num);
	vector_create(j, num2);
	print_vector(num);
	print_vector(num2);
	mult_vectors(num, num2, result);
	print_vector(result);
	divide_vectors(num, num2, result, remander);
	print_vector(result);
	cout << "test2";
	print_vector(remander);
	cout << std::endl;
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
