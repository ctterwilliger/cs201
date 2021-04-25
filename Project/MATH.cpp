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
	int i = 111234567;
	int j = -111654321;
	vector_create(i, num);
	vector_create(j, num2);
	print_vector(num);
	print_vector(num2);
	add_vectors(num, num2, result);
	print_vector(result);
	sub_vectors(num, num2, result);
	print_vector(result);
	cout << std::endl; 

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
