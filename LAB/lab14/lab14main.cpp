/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;
int main()
{
	std::string input;
	cout << "Please input a word: ";
	cin >> input;
	int size = input.size();
	for (int i = 0; i < size; i++)
	{
		cout << input.substr(0, size - i) << "\n";
	}
	std::string space;
	for (int i = 0; i <= size / 2; i++)
	{
		cout << space << input.substr(i, size - i * 2) << space << "\n";
		space.push_back(' ');
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}