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
using namespace std;
using std::cin;


void print(std::vector<string> text)
{
	for (auto n : text)
	{
		cout << n << " ";
	}
	cout << "\n";
}

void manip(std::vector<std::string> &text, char rep)
{

	for (auto & n : text)
	{
		
		if (n.size() != 0)
		{
			n.at(0) = rep;
		}
	}
}