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

int get_int()
{
	int i;
	cout << "Please enter a positive integer: ";
	cin >> i;
	while (i < 1)
	{
		cout << "Your integer was not positive\n Please enter another integer: ";
		cin >> i;
	}
	return i; 
}

std::string get_string()
{
	std::string text;
	cout << "Please enter a word(end to stop): ";
	cin >> text; 
	return text; 
}

void print_box_top(int box_width, std::string text)
{
	for (int i = 0; i < box_width; i++)
	{
		for (int j = 0; j < text.size() + 6; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
}
void print(int box_width, std::string text)
{
	print_box_top
	cout << "*";
	for int(int i = 0; i < text.size() + 4; i++)
	{
		cout << " ";
	}
	cout <<"*"
}