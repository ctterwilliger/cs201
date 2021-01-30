/**
* mileskm.ccp
* Clifton Terwilliger
* 1/29/2021
* miles to km
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	cout << "This program convers miles to kilometers\nPlease enter a the number you would like to convert from miles to kilometers: ";
	float miles;
	cin >> miles; 
	float km = miles * 1.609;
	cout << miles << " mile(s) is equivelent to " << km << " kilometer(s)\n";
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
