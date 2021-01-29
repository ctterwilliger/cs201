/**
* Lab 5.ccp
* Clifton Terwilliger
* 29Jan 21
* Lab 5
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	cout << "This program checks if your number is prime\n";
	int option = -1;
	long long number = -1;
	long long stop;
	// loops until user enters 0
	do
	{
		option = -1;
		number = -1;
		// gets user input
		cout << "Please enter a positive integer (0 to quit) ";
		cin >> number;
		while (number < 0)
		{
			cout << "Your imput Is not a positive integer\n";
			cout << "Enter a positive integer (0 to end): ";
			cin >> number;
		}
		// checks if the number is prime
		stop = sqrt(number) + 1;
		for (long long  j = 2; j < stop; j = j++)
		{
			if (number % j == 0)
			{
				option = 2;
				break;
			}
		}
		if (number == 1)
		{
			option = 1;
		}
		if (number == 0)
		{
			option = 0;
		}
		// outputs if it is prime or not
		switch (option)
		{
			case 0:
				break;
			case 1:
				cout << "Your number is 1\n";
				break;
			case 2:
				cout << "Your number " << number << " is composite\n";
				break;
			default:
				cout << "Your number " << number << " is prime\n";
		}
	}while (number != 0);
	//Exit Codde
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
