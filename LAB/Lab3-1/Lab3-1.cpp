/**
*Lab3-1
*Lab3-1.ccp
* Clifton Terwilliger
* 25 Jan 21
* loops
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	// Collects Length
	cout << "Program 1\n";
	cout << "Please Enter a Positive Integer that you would like to print the numbers precedding it\n";
	int print_length = 0;
	cin >> print_length;
	while (print_length <= 0)
	{
		cout << "Please Enter a Positive Integer\n";
		cin >> print_length;
	}

	//prints 1 through User Entered Integer
	int i = 1;
	while (i <= print_length) {
		cout << i <<" ";
		i = i + 1;
	}
	cout << "\n"; 

	cout << "Program 2 & 3\n";
	//Collects Width and Hieght 
	cout << "Please Enter the Width of the Box\n";
	int box_w = 0;
	cin >> box_w;
	while (box_w <= 0)
	{
		cout << "Please Enter a Positive Integer\n";
		cin >> box_w;
	}
	cout << "Please Enter the Height of the Box\n";
	int box_h = 0;
	cin >> box_h;
	while (box_h <= 0)
	{
		cout << "Please Enter a Positive Integer\n";
		cin >> box_h;
	}

	//prints box
	cout << "Program 2\n";
	for (int i = 0; i < box_h; i++)
	{
		for (int j = 0; j < box_w; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "Program 3\n";
	//using modulo if to determine if the potition is even or odd to print alterating text
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			if ((i + j) % 2 == 0) 
			{
				cout << "*";
			}
			else
			{
				cout << "#";
			}
		}
		cout << "\n";
	}

	//exit code// 
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
