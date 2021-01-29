/**
* Greast.ccp
* Clifton Terwilliger
* 20 Jan 21
* Greatest
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	int number = 0;
	int greatest = 0;
	cout << "Enter a sequence of positive integers, ending with zero\nI will print the greatest positive number entered\n";
	do
	{
		cout  << "Enter a positive integer (0 to end): ";
		cin >> number; 
		while (number < 0)
		{
			cout << "Your imput Is not a positive integer\n";
			cout << "Enter a positive integer (0 to end): ";
			cin >> number;
		}
		if (number > greatest)
		{
			greatest = number;
		}
	} while (number != 0);
	cout << "\n The greatest number entered: " << greatest; 
	//Exit code
	cout << "\nPress ENTER to quit";
	while (cin.get() != '\n');
	return 0;
}
