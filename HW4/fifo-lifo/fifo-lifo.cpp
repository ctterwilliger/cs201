/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
using std::cin;

bool IscontainerEmpty(std::vector<std::string> text)
{
	if (text.size() == 0)
	{
		return true;
	}
	return false; 
}

void printContainer(std::vector<std::string> contain)
{
	for (auto n : contain)
	{
		cout << n << " "; 
	}
}
void lifo(std::vector<std::string> & text, std::vector<std::string> & pop)
{
	pop.push_back(text.back());
	cout << text.back() << " is being popped out" << endl;
	std::vector<std::string> placeholder; 
	for (int i = 0; i < text.size() - 1; i++)
	{
		placeholder.push_back(text.at(i));
	}
	text = placeholder; 

}

unsigned StringToToken(const std::string& input, std::vector<std::string>& tokens)
{
	//Converts String into vector of tokens
	std::istringstream iss(input);
	std::vector<std::string> token(std::istream_iterator<std::string>{iss},
		std::istream_iterator<std::string>());
	// Adds Tokens to existing vector of strings
	for (auto n : token)
	{
		tokens.push_back(n);
	}
	return token.size();
}

int main()
{
	std::vector<std::string> pop;
	std::vector<std::string> container;
	std::string text; 
	std::getline(std::cin, text);
	StringToToken(text, container);
	pop = {};
	while (!(IscontainerEmpty(container)))
	{
		lifo(container, pop);
		cout << endl << "The container is now: ";
		printContainer(container); 
		cout << endl; 
	}
	for (auto n : pop)
	{
		cout << n << " ";
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}