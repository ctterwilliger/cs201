/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;

bool Readline(std::string & str)
{
	std::string text;
	std::getline(std::cin, text);
	if (text == "")
	{
		return false;
	}
	str = text; 
	return true;
}