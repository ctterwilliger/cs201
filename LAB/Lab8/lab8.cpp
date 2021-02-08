/**
* Lab8.ccp
* cs201
* Clifton Terwilliger
* 2/05/2021
* Lab8
*/

#include "intio.hpp"
#include <iostream>

using namespace std;
using std::cin;

int doInput()
{
	int get = getInt();
	return get;
}

int compute(int square)
{
	return square * square;
}