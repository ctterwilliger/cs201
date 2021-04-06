/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include "floating_point.hpp"
using std::size_t;

using namespace std;
using std::cin;
int main()
{
	std::vector<int> v{ 1,2,3,4,5 };
	for (size_t i = 2; i < v.size(); ++i)
	{
		v[i]++;
	}


	for (auto n : v)
	{
		cout << n << endl;
	}

	print_table_line(0);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
