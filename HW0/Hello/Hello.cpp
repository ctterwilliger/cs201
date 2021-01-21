/**
* HW0
*Hello.ccp
* Clifton Terwilliger
* 20 Jan 21
* Hello World
*/

#include <iostream>
using namespace std; 
using std::cin;
int main()
{
	//loop, prints Hello World 5 times//
	for (int i = 0; i < 5; i++)
	{
		cout << "Hello World\n";
	}
	//exit code// 
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0; 
}
