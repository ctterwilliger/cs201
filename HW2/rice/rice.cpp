/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	double rice = 1;
	for (int i = 1; i <= 64; i++)
	{
		cout << "Square " << i << " has " << rice <<" rice\n"; 
		rice = rice * 2;
	}

	cout << "\nWe can do 31 squares with an integer and at the 32 square, the value overflows to negative and then on is 0.\n";
	cout << "With an double we approximently print up to 3.4 * 10 ^ 38.\nIf we want to do accuratly calculate we would want to use a long long, as a long might flip at 64.\n";
	//Exit code
	cout << "\nPress ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
