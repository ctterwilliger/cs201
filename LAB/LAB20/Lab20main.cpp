/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
using std::cin;

void print_table_line(int deg)
{

	float rad = (deg * 3.14159) / 180;
	cout << setprecision(1);
	cout << deg << ",";
	cout << setprecision(8);
	cout << cos(rad) << endl;


}

int main()
{
	cout << fixed; 
	for (int i = 0; i <= 180; i += 5)
	{
		print_table_line(i);
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
