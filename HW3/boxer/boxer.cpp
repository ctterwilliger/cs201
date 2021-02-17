/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
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