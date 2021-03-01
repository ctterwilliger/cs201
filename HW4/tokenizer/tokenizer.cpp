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
#include <sstream>
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


unsigned StringToToken(const std::string& input, std::vector<std::string>& tokens)
{
	std::istringstream iss (input);
	std::vector<std::string> token(std::istream_iterator<std::string>{iss},
		std::istream_iterator<std::string>());
	for (auto n : token)
	{
		tokens.push_back(n);
	}
	return token.size();
}