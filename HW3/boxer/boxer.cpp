/**
* boxer.ccp
* cs201
* Clifton Terwilliger
* 02/17/2021
* Functions for box print, includes get_int, get_string and print
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;

//gets integer from user
int get_int()
{
	int i;
	cout << "Please enter a positive integer: ";
	cin >> i;
	//checks integer for positivity then ask again if integer is not positive
	while (i < 1)
	{
		cout << "Your integer was not positive\n Please enter another integer: ";
		cin >> i;
	}
	return i; 
}

//gets string from user
std::string get_string()
{
	std::string text;
	cout << "Please enter a word(end to stop): ";
	cin >> text; 
	return text; 
}

//prints the top of the box(not a global function)
void print_box_top(int box_width, std::string text)
{
	for (int i = 0; i < box_width; i++)
	{
		for (int j = 0; j < text.size() + 2 + (2 * box_width); j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
}
//prints the wall(not a global function)
void print_box_wall(int box_width, std::string text)
{
	for (int i = 0; i < box_width; i++)
	{
		cout << "*";
	}
	for (int i = 0; i < text.size() + 2; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < box_width; i++)
	{
		cout << "*";
	}
	cout << "\n";
}
//print the word surrounded by "*"(not a global function)
void print_word(int box_width, std::string text)
{
	for (int i = 0; i < box_width; i++)
	{
		cout << "*";
	}
	cout << " " << text << " ";
	for (int i = 0; i < box_width; i++)
	{
		cout << "*";
	}
	cout << "\n";
}

//prints the box
void print(int box_width, std::string text)
{
	print_box_top(box_width, text);
	print_box_wall(box_width, text);
	print_word(box_width, text);
	print_box_wall(box_width, text);
	print_box_top(box_width, text);
}