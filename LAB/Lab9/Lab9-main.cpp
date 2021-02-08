/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include "modifyString.hpp"
#include <iostream>
#include <string>

using namespace std;
using std::cin;

int main()
{
	std::string stringinmain ("Hello");
	cout << "Length: " << string_mod(9, stringinmain) << '\n';
	cout << stringinmain << "\n";

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
