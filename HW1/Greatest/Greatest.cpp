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
	do
	{
		cout << "Enter a sequence of positive integers, ending with zero\nI will print the greatest positive number entered\n"
		cout  << "Please Enter An Integer\n";
		cin >> number; 
		while (number < 0)
		{
			cout << "Your Imput Is not a Positive Integer";
			cin >> number;
		}
		if (number > greatest)
		{
			greatest = number;
		}
	} while (number != 0);
	cout << greatest; 
	//Exit code
	cout << "Press ENTER to quit";
	while (cin.get() != '\n');
	return 0;
}
