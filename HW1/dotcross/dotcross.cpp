/**
* dot cross.ccp
* Clifton Terwilliger
* 29 Jan 21
* dot cross
*/

#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;

int length_int(float temp)
{
	int length = 0;
	while (temp > 1)
	{
		temp = temp / 10;
		length++;
	}
	return length;
}
int main()
{
	float A_x;
	float A_y;
	float A_z;
	float B_x;
	float B_y;
	float B_z;
	cout << "Please enter  two vectors you would like to dot and cross\n";
	cout << "Vector 1 x compontent: ";
	cin >> A_x;
	cout << "Vector 1 y compontent: ";
	cin >> A_y;
	cout << "Vector 1 z compontent: ";
	cin >> A_z;
	cout << "Vector 2 x compontent: ";
	cin >> B_x;
	cout << "Vector 2 y compontent: ";
	cin >> B_y;
	cout << "Vector 2 z compontent: ";
	cin >> B_z;
	float dot = (A_x * B_x) + (A_y * B_y) + (A_z * B_z);
	cout << "Vector 1 dot Vector 2 = "
	 	 << std::setprecision(5+length_int(dot)) << dot << '\n';
	float C_x = (A_y * B_z) - (A_z * B_y);
	float C_y = (A_z * B_x) - (A_x * B_z);
	float C_z = (A_x * B_y) - (A_y * B_x);
	cout << "Vector 1 cross Vector 2 = ("
		<< std::setprecision(5 + length_int(C_x)) << C_x << ", "
		<< std::setprecision(5 + length_int(C_y)) << C_y << ", "
		<< std::setprecision(5 + length_int(C_z)) << C_z
		<< ")\n";
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
