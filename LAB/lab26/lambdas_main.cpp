/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.
	std::vector<std::pair<size_t, std::string>> strings; 
	for (auto n : WIKIPEDIA_CPP)
	{
		strings.push_back(std::make_pair(n.size(), n));
	}


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.
	std::sort(strings.begin(), strings.end(),
		// Lamda
		[](std::pair<size_t, std::string> a, std::pair < size_t, std::string> b)
		{
			return(a.first > b.first);
		}
	);


	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector
	auto iter1 = strings.begin();
	auto iter2 = strings.end(); 
	std::cout << printVectorPairs(iter1, iter2);


	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}
