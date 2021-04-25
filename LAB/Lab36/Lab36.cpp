/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
using std::cout;
using std::cin;

void flag(unsigned int a)
{
	cout << std::endl << "New flag" << std::endl;
	if (a & 1)
	{
		cout << "Your number is odd" << std::endl;
	}
	if (a | 2)
	{
		cout << "This could be a function" << std::endl;
	}
	if ((a & 15) == 15)
	{
		cout << "This is a rare output" << std::endl;
	}

}

int main()
{
	unsigned int a= 33;
	unsigned int b = 8796;
	unsigned int c = 127;
	flag(a);
	flag(b);
	flag(c);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
