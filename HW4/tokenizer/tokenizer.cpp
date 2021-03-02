/**
* Tokenizer.ccp
* cs201
* Clifton Terwilliger
* 03/01/2021
* Functions for tokenizertest
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
using std::cin;

// Reads line and returns string
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

// Turns string into tokens
unsigned StringToToken(const std::string& input, std::vector<std::string>& tokens)
{
	//Converts String into vector of tokens
	std::istringstream iss (input);
	std::vector<std::string> token(std::istream_iterator<std::string>{iss},
		std::istream_iterator<std::string>());
	// Adds Tokens to existing vector of strings
	for (auto n : token)
	{
		tokens.push_back(n);
		tokens.push_back(" ");
	}
	return token.size();
}

// returns true or false if string contains only integers.
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
// return true or false if string is an idenifier.
bool isidenifier(std::string string)
{

		if (string.at(0) == '_' || (string.at(0) < 123 && string.at(0) > 96) || (string.at(0) < 91 && string.at(0) > 65) || isdigit(string.at(0)))
		{
			return true;
		}
	return false;
}

//Analyzes Tokens and prints them.
void AnalyzeTokens(const std::vector<std::string>& tokens)
{
	int type;
	for (auto n : tokens)
	{
		if (n.front() == 34 && n.back() == 34)
		{
			cout << "[identifier]     \"" << n << "\"" <<endl;
		}
		else if(n == " ")
		{
			cout << "[whitespace]     " << "\"\ \"" << endl;
		}
		else if (isint(n))
		{
			cout << "[integer]        \"" << n << "\"" << endl;
		}
		else if (isidenifier(n))
		{
			cout << "[identifier]     \"" << n << "\"" << endl;
		}
		else
		{
			cout << "[unknown]        \"" << n << "\"" << endl;
		}
	}
}

