#pragma once

#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>



#ifndef FILE_MATH_FUNCTIONS_HPP_INCLUDED
#define FILE_MATH_FUNCTIONS_HPP_INCLUDED

void vector_create(int i, std::vector<int>& num);

void print_vector(const std::vector<int>& num);

void add_pos_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

void add_pos_neg_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

void add_neg_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

void add_pos_pos_vector(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

void add_vectors(const std::vector<int>& num1, const std::vector<int>& num2, std::vector<int>& result);

void sub_vectors(const std::vector<int>& num1, std::vector<int>& num2, std::vector<int>& result);





#endif