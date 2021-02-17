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

//gets integer from user
int get_int()
{
	int i;
	cout << "Please enter a positive integer(0 to end): ";
	cin >> i;
	//checks integer for positivity then ask again if integer is not positive
	while (i < 0)
	{
		cout << "Your integer was not positive\n Please enter another integer(0 to end): ";
		cin >> i;
	}
	return i;
}

int main()
{
	cout << "This progrm run the Colltz function until it reaches 1\n";
	int i = get_int();
	do
	{
		if (i == 0)
		{
			break; 
		}
		cout << i << " ";
		while (i != 1)
		{
			if (i % 2 == 0)
			{
				i = i / 2;
			}
			else
			{
				i = 3*i + 1;
			}
			cout << i << " ";
		}
		cout << "\n";
		i = get_int();
	} while (true == true);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}


