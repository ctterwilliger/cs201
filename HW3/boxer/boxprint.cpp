/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include "boxer.hpp"
using namespace std;
using std::cin;
int main()
{
	int i = get_int(); 
	cout << i; 
	
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}