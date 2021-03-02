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
		tokens.push_back(" ");
	}
	return token.size();
}

bool isint(std::string string)
{
	for (auto n : string)
	{
		if (isdigit(n) == false)
		{
			return false;
		}
	}
	return true; 
}
bool isidenifier(std::string string)
{

		if (string.at(0) == '_' || (string.at(0) < 123 && string.at(0) > 96) || (string.at(0) < 91 && string.at(0) > 65) || isdigit(string.at(0)))
		{
			return true;
		}
	return false;
}

void AnalyzeTokens(const std::vector<std::string>& tokens)
{
	int type;
	for (auto n : tokens)
	{
		if (n.front() == 34 && n.back() == 34)
		{
			cout << "[identifier]     " << n << endl;
		}
		else if(n == " ")
		{
			cout << "[whitespace]     " << "\"\ \"" << endl;
		}
		else if (isint(n))
		{
			cout << "[integer]        " << n << endl;
		}
		else if (isidenifier(n))
		{
			cout << "[identifier]     " << n << endl;
		}
		else
		{
			cout << "[unknown]        " << n << endl;
		}
	}
}

