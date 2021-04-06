
/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
using namespace std;
using std::cin;

bool isSorted(std::vector<int> vect)
{
	for (int i = 0; i < vect.size() - 1; i++)
	{
		if (vect.at(i) > vect.at(i + 1))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	std::vector<int> i{ 1, 1, 2, 3, 4 ,3, 7, 13 };
	if (isSorted(i))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}