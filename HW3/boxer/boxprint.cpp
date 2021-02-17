/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
#include "boxer.hpp"
using namespace std;
using std::cin;
int main()
{
	int box_width; 
	std::string text;

	cout << text; 
	do
	{
		text = get_string();
		if (text == "end")
		{
			break;
		}
		box_width = get_int();
		print(box_width, text);
	} while(true == true);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}