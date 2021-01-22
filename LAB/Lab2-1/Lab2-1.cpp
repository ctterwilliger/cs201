/**
*Lab2-1
*Lab2-1.ccp
* Clifton Terwilliger
* 22 Jan 21
* (x+1)^2
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	//loop, prints Hello World 5 times//
	int i;
	cout << "Please enter an integer you would like to run through this function\n";
	cin >> i;
	i = i + 1;
	i = i * i; 
	cout << "Your result is " << i <<"\n"; 
	//exit code// 
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
