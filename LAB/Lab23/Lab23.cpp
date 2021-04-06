/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using std::cin;
using std::string;
int main()
{
	std::map<string, int> map;
	map["a"] = 12;
	map["i"] = 60;
	map["e"] = 24;
	map["u"] = 240;
	map["o"] = 120;
	
	for (const auto & n : map)
	{
		std::cout << n.first << " ";
		std::cout << std::setw(3) << n.second;
		std::cout << std::endl; 
	}
	//Exit code
	std::cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
