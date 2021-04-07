/**
* file.ccp
* cs201
* Clifton Terwilliger
* 04/07/2021
* name
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using std::cout;
using std::cin;

void test_char(std::map<char, int>& map, std::string answer, char guess)
{
	if (map[guess] == 0 or map[guess] == 1)
	{
		cout << "You have already guessed this character" << std::endl; 
		return;
	}

	if ()
	{

	}
	map.insert(std::pair<char, int>()
}




int main()
{
	std::string answer = "Hello";
	std::map<char, bool> map;

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
