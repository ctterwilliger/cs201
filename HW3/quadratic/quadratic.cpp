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
	cout << "This program calclates the roots of a quadratic equations of the form ax^2 + bx + c\n";
	float a, b, c, x_1, x_2;  
	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
	cout << "Please enter c: ";
	cin >> c;
	if (b * b - (4*a*c) < 0)
	{
		cout << "your result is imaginary\n";
	}
	else
	{
		x_1 = (-b + sqrt((b * 2) - (4 * a * c))) / (2 * a);
		x_2 = (-b - sqrt((b * 2) - (4 * a * c))) / (2 * a);
		cout << "x1 = "<<  x_1 << " x2 = " << x_2; 
	}
	cout << "We know x1 and x2 are right as\n";
	cout << "As x1^2 = " << x_1 * x_1 << " = a\n";
	cout << "As (-x_1) + (-x_2) = " << - x_1 - x_2 << " = b\n";
	cout << "As x2^2 = " << x_2 * x_2 << " =  c\n";
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}