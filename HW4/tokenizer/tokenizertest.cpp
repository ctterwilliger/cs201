/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
#include "tokenizer.hpp"
using namespace std;
using std::cin;
int main()
{
	std::string string;
	Readline(string);
	cout << string; 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}