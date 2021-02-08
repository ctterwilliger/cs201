/**
* modifyString.hpp
* cs201
* Clifton Terwilliger
* 2/8/2021
* modifyString
*/


#include <iostream>
#include <string>
using namespace std;



int string_mod(int n, std::string & text)
{
	std::string j;
	j = to_string(n);
	text = text + j;
	return text.size();
}


