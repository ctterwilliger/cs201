/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <fstream>
using std::cout;
using std::cin;

class MyVector {;
	public:
		//Creates vector with values of 0
		MyVector() {
			_x1 = 0; _x2 = 0;_y1 = 0;_y2 = 0;_z1 = 0;_z2 = 0;
		}
		//creates MyVector with inputs for each position
		MyVector(double x1,double x2, double y1, double y2, double z1, double z2 ) {
			_x1 = x1; _x2 = x2;_y1 = y1;_y2 = y1;_z1 = z1;_z2 = z2;
		}
		// finds magnitude of vector
		double length()
		{
			return std::sqrt((_x1 - _x2) * (_x1 - _x2) + (_y1 - _y2) * (_y1 - _y2) + (_z1 - _z2) * (_z1 - _z2));
		}

	private:
		double _x1;
		double _x2;
		double _y1;
		double _y2;
		double _z1;
		double _z2;

};
int main()
{
	//operns and checks if open
	std::ifstream fin("vectors.txt");
	if (!fin) {
		cout << "Error opening " << std::endl;
		exit(1);
	}
	//creates and checks if open
	std::ofstream fout("lengths.txt");
	if (!fout.is_open())
	{
		cout << "Error creating file" << std::endl;
		exit(2);
	}
	double x1, x2, y1, y2, z1, z2;
	//runs until end of file 
	while (!fin.eof())
	{
		fin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
		MyVector Vector(x1, x2, y1, y2, z1, z2);
		//prints to lengths.txt
		fout << Vector.length() << '\n';
	}
	fout.close();

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
