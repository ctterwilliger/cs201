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
int main()
{
	std::string text = "hello";
	int cypher = 2;
	for (auto& n : text)
	{
		n += cypher;
	}
	cout << text; 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
