
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <random>

int main()
{
	
	// assume haystack contains 1,000,000,000 random numbers
	std::random_device rd;
	std::mt19937 g(rd());
	int num = rd();
	std::vector<int> haystack{num};
	std::shuffle(haystack.begin(), haystack.end(), g);
	int needle = num;
	// Find the needle in haystack
	std::vector<int>::iterator it;

	// slower than finding a needle in a sorted array with binary search, but usually faster than sorting
	it = std::find(haystack.begin(), haystack.end(), needle);
	//checks if needle is found
	if (it == haystack.end())
	{
		std::cout << "Error Needle not found" << std::endl;
	}
	else
	{
		std::cout << "Needle found" << std::endl;
	}
	// Now we will sort the array and use a faster search
	std::sort(haystack.begin(), haystack.end());
	//check if needle is found
	if(std::binary_search (haystack.begin(), haystack.end(), needle))
	{
		std::cout << "Needle found ";
	}
	else
	{
		std::cout << "Error Needle not found" << std::endl;
	}
	// Find the needle in haystack
}


