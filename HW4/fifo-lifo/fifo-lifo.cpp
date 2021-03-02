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
using namespace std;
using std::cin;

bool IscontainerEmpty(std::string text)
{
	if (text == "\0")
	{
		return true;
	}
	return false; 
}

void printContainer(std::vector<std::string> contain)
{
	for (auto n : contain)
	{
		cout << n; 
	}
}
void lifo(std::string text, std::vector<std::string> & pop)
{

	
}



int main()
{
	std::vector<std::string> pop;
	std::vector<std::string> container;
	cin >> text; 
	pop = {};
	while (!(IscontainerEmpty(string)))
	{
		lifo(text, pop);
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}