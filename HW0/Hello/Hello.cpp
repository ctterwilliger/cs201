/**
* HW0
*Hello.ccp
* Clifton Terwilliger
* date
* Hello World
*/

#include <iostream>
using namespace std; 
using std::cin;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Hello World\n";
	}
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0; 
}
