/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/
#include "truncstruct.hpp"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
int main()
{
	cout << "Please enter a string: ";
	std::string str; 
	cin >> str;
	StringInfo string; 
	string =  trunc8(str);
	cout << std::endl << string.str << std::endl; 
	//Exit code
	std::cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
