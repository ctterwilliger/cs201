/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
using std::cin;

void print_table_line(int deg)
{
	float rad = (deg * 3.14159) / 180;
	cout << deg << ",";
	cout << cos(rad) << ",";
	cout << sin(rad) << endl;
	

}
