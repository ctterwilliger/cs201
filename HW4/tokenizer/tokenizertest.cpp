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
	std::vector<std::string> tokens;
	while(true)
	{
		Readline(string);
		size = StringToToken(string, tokens);
		if (tokens.at(tokens.size() - 2 ) == "end" || tokens.at(tokens.size() - 2) == "End" || tokens.at(tokens.size() - 2) == "END")
		{
			break;
		}
	}

	AnalyzeTokens(tokens);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}