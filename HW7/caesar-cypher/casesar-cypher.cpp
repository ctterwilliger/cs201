/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
void cypher_char(char & c, int cypher)
{
	if (islower(c))
	{
		c = ((c - 97) + cypher) % 26 + 97;
	}
	else if (isupper(c))
	{
		c = ((c - 65) + cypher) % 26 + 65;
	}
}
int main()
{
	cout << "This program cyphers what you input." << std::endl << "It will do so until you type \"end\", \"END\", or \"End\"" << std::endl; 
	std::string text;
	int cypher = 0;
	std::istringstream input; 
	do
	{
		for (auto& n : text)
		{
			cypher_char(n, cypher);
		}
		cout << text << std::endl;
		cout << "Please enter the text\n" << std::endl;
		text = ""; 
		std::getline(cin, text);
		
		cout << "Please choose a positive integer you would like to shift by: "; 
		std::string placeholder;
		std::getline(cin, placeholder);
		cypher = stoi(placeholder);
		while (cypher < 0)
		{
			cout << "Your integer was not positive " << std::endl << "Please enter a positive integer: " << std::endl;
			std::getline(cin, placeholder);
			cypher = stoi(placeholder);
		}
	} while (!(text == "End" || text == "END" || text == "end"));
	cout << text; 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
