/**
* Diamond.ccp
* cs 201
* Clifton Terwilliger
* 28 Jan 21
* Daimond
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	// Get Diamond Size from user
	int loop = 0;
	cout << "Please Enter a Positive Integer\n";
	cin >> loop;
	while (loop < 1)
	{
		cout  << "Your Integer must be positive\n"; 
		cin >> loop;
	}
	//prints top half of diamond
	for (int i= 0; i < loop; i++)
	{
		for (int k = 0; k < loop - i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "#";
		}
		cout << "\n";
	}
	// Prints bottom half
	for (int i = 0; i < loop; i++)
	{
		for (int k = 0; k < i + 2; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * (loop - i - 1) - 1; j++)
		{
			cout << "#";
		}
		cout << "\n";
	}
	//exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
