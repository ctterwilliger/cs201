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

	//prints 1-20
	cout << "Program 1\n";
	int i = 1;
	while (i <= 20) {
		cout << i <<" ";
		i = i + 1;
	}
	cout << "\n"; 
	cout << "Program 2\n";
	//prints box
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 60; j++)
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
