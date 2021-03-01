/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
using std::cin;
int square_string(std::string text)
{
	istringstream instream(text);
	int i;
	instream >> i; 
	if (!instream)
	{
		cout << "There was no integer in string" << endl; 
		return -1; 
	}
	return i * i; 
} 