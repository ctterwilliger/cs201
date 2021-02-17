/**
* quadratic.ccp
* cs201
* Clifton Terwilliger
* 02/17/2021
* takes user input for a quadratic equation and prints result, or tells the user it is imaginary
*/
#include <math.h>
#include <iostream>
using namespace std;
using std::cin;
int main()
{
	//iniziltizes variables and takes user input
	cout << "This program calclates the roots of a quadratic equations of the form ax^2 + bx + c\n";
	float a, b, c, x_1, x_2;  
	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
	cout << "Please enter c: ";
	cin >> c;

	// checks if result is real and responds accordingly 
	if (b * b - (4*a*c) < 0)
	{
		cout << "Your result is imaginary\n";
	}
	else
	{
		x_1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
		x_2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
		cout << "x1 = "<<  x_1 << ", x2 = " << x_2 << "\n"; 
		cout << "We know x1 and x2 are right as\n";
		cout << "x1^2 * a = " << x_1 * x_1 * a << " = a\n";
		cout << "(-x1 - x2) * a = " << (-x_1 - x_2) * a << " = b\n";
		cout << "x2^2 * a = " << x_2 * x_2 * a << " =  c\n";
	}
	
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}