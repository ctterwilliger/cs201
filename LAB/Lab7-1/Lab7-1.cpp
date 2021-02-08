/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/
#include "intio.hpp"
#include <iostream>
#include <vector>
using namespace std;
using std::cin;
int main()
{
	cout << "Please Input 3 numbers\n" << "Number 1\n";
	int input_1 = getInt();
	cout << "Number 2\n";
	int input_2 = getInt();
	cout << "Number 3\n";
	int input_3 = getInt();
	cout << "required function\n";
	putInt(input_1, 10);
	cout << endl;
	putInt(input_2, 10);
	cout << endl;
	putInt(input_3, 10);
	cout << endl;

	//addition function 1 and 2 running together
	cout << "\nadditional function 1\n";
	std::vector<int> numb; 
	int small = 2147483647;
	int input;
	numb.push_back(-1);
	cout << "Please enter a series of integers\n";
	for (int i = 0; numb.back() != 0; i++)
	{
		cout << "Please enter integer" << i << "(type 0 to end): ";
		input = getInt();
		if (input == 0)
		{
			break; 
		}
		numb.push_back(input); 
		if (input < small)
		{
			small = input;
		}
	}
	for (int i = 1; i < numb.size(); i++)
	{
		putInt(numb[i], 10);
		cout << '\n';
	}

	cout << "\nadditional function 2\n";
	cout << "the smalles number you inputed: " << input;

	//Exit code
	cout << "\nPress ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
