/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <string>
#include <iostream>
using namespace std;
using std::cin;
void PrintSubString(std::string text)
{
	for (int size = 1; size <= text.size(); size++)
	{
		for (int pos = 0; pos <= text.size() - size; pos++)
		{
			for (int j = pos; j < size + pos && j < text.size(); j++)
			{
				cout << text.at(j);
			}
			cout << " ";
		}
	}
}
int main()
{
	std::string text = "1234567890";
	PrintSubString(text);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
