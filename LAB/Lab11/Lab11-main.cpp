/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include <string>
#include <iostream>
using namespace std;
using std::cin;
int main()
{
	std::string input = "f";
	while (input != "stop")
	{
		cout << "Please input a word";
		cin >> input;
		for (int i = 0; i < input.size(); i++)
		{
			if (input.at(i) <= 122 && input.at(i) >= 97)
			{
				cout << input.at(i); 
			}
		}
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
