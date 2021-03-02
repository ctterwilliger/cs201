/**
* tokenizertest.ccp
* cs201
* Clifton Terwilliger
* 03/01/2021
* repeatedly asks for user input then prints tokens and token type. 
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
	std::vector<std::string> tokens;
	cout << "Please type in some text. When you are done type \"\end\"\ or \"\End\"\ or \"\END\"\ " << endl; 
	//Runs until user types end 
	while(true)
	{
		//obtains tokens
		Readline(string);
		size = StringToToken(string, tokens);

		if (tokens.at(tokens.size() - 2 ) == "end" || tokens.at(tokens.size() - 2) == "End" || tokens.at(tokens.size() - 2) == "END")
		{
			break;
		}
	}

	// Prints tokens
	AnalyzeTokens(tokens);

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}