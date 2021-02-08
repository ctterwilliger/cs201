/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;

int input(std::string text)
{
	int i; 
	cout << text;
	cin >> i;
	while (i < 0)
	{
		cout "Please enter a positive number: ";
		cin >> i; 
	}
 }

int main()
{

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
