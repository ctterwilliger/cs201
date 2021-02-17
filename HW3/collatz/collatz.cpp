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
	int i;
	do
	{
		i = get_int
	}
	while(i != 0)
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}


