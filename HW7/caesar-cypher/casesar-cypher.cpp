/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <string>
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
	std::string text = "Hello, everyone!";
	int cypher = 3;
	for (auto& n : text)
	{
		cypher_char(n, cypher);
	}
	cout << text; 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
