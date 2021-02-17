/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/
#include <math.h>
#include <iostream>
using namespace std;
using std::cin;
int main()
{
	float a, b, c, x_1, x_2;  
	cin >> a;
	cin >> b;
	cin >> c;
	if (b * b - (4*a*c) < 0)
	{
		cout << "your result is imaginary\n";
	}
	else
	{
		x_1 = (-b + sqrt((b * 2) - (4 * a * c))) / (2 * a);
		x_2 = (-b - sqrt((b * 2) - (4 * a * c))) / (2 * a);
		cout << x_1 <<' '<< x_2; 
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}