/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <string>
#include "vector_manip.hpp"

using namespace std;
using std::cin;
int main()
{
	std::vector<std::string> text{ "I","am","the","eggman." };
	print(text);
	manip(text, 'x');
	print(text);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}