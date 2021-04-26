/**
* math_function.ccp
* cs201
* Clifton Terwilliger
* 04/35/2021
* header file for math_functions.cpp
*/

#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>



#ifndef FILE_MATH_FUNCTIONS_HPP_INCLUDED
#define FILE_MATH_FUNCTIONS_HPP_INCLUDED

// vector_create
// takes int input and vector<int> refereence and creates a vector with the standard used in this header
// 
//Sample usage
//	vector_create(int,vector);
void vector_create(int i, std::vector<int>& num);

// print_vector
// takes vector<int> const reference and prints it using the standard
// 
//Sample usage
//	print_vector(vector<int>); 
void print_vector(const std::vector<int>& num);


// add_vectors
// takes two vectors inputs and adds thems outputing it to result
//
// sample usage:
//	add_vector(num1, num2, result);
void add_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

// sub_vectors
// takes two vectors inputs and subs thems outputing it to result
//
// sample usage:
//	add_vector(num1, num2, result);
void sub_vectors(const std::vector<int>& num1, std::vector<int> num2, std::vector<int>& result);

// mult_vectors
// takes two vectors inputs and multiplies them thems outputing it to result
//
// sample usage:
//	add_vector(num1, num2, result);
void mult_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

// add_vectors
// takes vector and int inputs and adds thems outputing it to result
//
// sample usage:
//	add_vector(vector<int>, int, result);
void pow_vectors(const std::vector<int>& num1, int pow,  std::vector<int>& result);

// add_vectors
// takes two vectors inputs and dives thems outputing it to result and remander
//
// sample usage:
//	add_vector(num1, num2, result, remander);
void divide_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result, std::vector<int>& remander);
#endif