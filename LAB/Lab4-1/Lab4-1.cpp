/**
*Lab4-1
*Lab4-1.ccp
* Clifton Terwilliger
* 27 Jan 21
* loops
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	cout << "function 1\n";
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else
		{
			cout << i << "\n";
		}
	}
	cout << "Press ENTER to start the next program\n";
	while (cin.get() != '\n');
	cout << "Function 2\n";
	for (int i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			cout << "Fizz Buzz\n";
		}
		else if(i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if(i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else
		{
			cout << i << "\n";
		}
	}
	//exit code// 
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
