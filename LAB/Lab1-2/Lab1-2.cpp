/**
*lab1-2.ccp
* Clifton Terwilliger
* 19 Jan 2018
* Multiply and Hello
*/
#include <iostream>
using namespace std;
using  std::cout;
using  std::cin;

int main()
{
	cout << "Hello World" << endl; 
	cout << "Please Enter two integers you would like to multiply";
	int i, j;
	cin >> i >> j;
	int p = i * j;
	cout << "The product of" << i << " & " << j << " = " << p << endl;
	cout << "Press ENTER to quit";
	return 0; 
}