/**
* boxprint.ccp
* cs201
* Clifton Terwilliger
* 02/17/2021
* print a box around user inputed word
*/

#include <iostream>
#include <string>
#include "boxer.hpp"
using namespace std;
using std::cin;

int main()
{
	//initialzes varibles and tells user what the program does
	int box_width; 
	std::string text;
	cout << "This program prints a box around the word you input\n";

//	prints boxes around user inputed words until user types "end"
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