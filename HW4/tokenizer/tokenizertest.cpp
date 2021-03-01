/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
#include <vector>
#include "tokenizer.hpp"
using namespace std;
using std::cin;
int main()
{
	int size;
	std::string string;
	Readline(string);
	std::vector<std::string> tokens;
	cout << string << endl; 
	size = StringToToken(string, tokens);
	for (int i = 0; i < tokens.size(); i++)
	{
		cout << tokens.at(i) << endl; 
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}