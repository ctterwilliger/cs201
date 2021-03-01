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
#include "Lab15-string.hpp"
using namespace std;
using std::cin;
int main()
{
	std::vector<std::string> v { "69", "69a", "a69", "5.6", "68", "\t11", "68 69", "0xA" };
	for (auto n : v)
	{
		cout << square_string(n) << endl;
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}