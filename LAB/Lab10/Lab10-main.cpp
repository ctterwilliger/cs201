/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include <iostream>
#include "Functions.hpp"
using namespace std;
using std::cin;
int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (IsDiv3(i) == true)
		{
			cout << i << " Is divisible by 3\n";
		}
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
