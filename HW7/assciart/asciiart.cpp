/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using std::cout;
using std::cin;
int main()
{
	cout << "This program prints a ppm file to ascii art"<< std::endl;

	std::string infile = "parrot.ppm";
	std::ifstream fin(infile);
	if (!fin)
	{
		cout << "Error opening " << infile << std::endl;
		exit(1);
	}
	cout << "File succesfully opened" << std::endl;

	std::string line;
	getline(fin, line);
	if (!fin)
	{
		cout << "Error Reading Stream" << std::endl;
		exit(2);
	}
	if (line.size() < 2 || line.at(0) != 'P' || line.at(1) != '3')
	{
		cout << "Unable to read magic number P3" << std::endl;
	}
	cout << "PPM (text)" << std::endl;

	getline(fin, line);
	if (!fin)
	{
		cout << "Error Reading stream " << std::endl;
		exit(3);
		if (line[0] == '#') {
			cout << "Ignoring comment" << std::endl;
		}
	}

	// this won't handle comments
	int xres, yres, maxval;
	fin >> xres >> yres >> maxval;
	if (!fin) {
		cout << "Error reading stream" << std::endl;
		exit(3);
	}
	cout << "Image size: " << xres << " x " << yres << std::endl;
	cout << "Maxval = " << maxval << std::endl;

	// loop for xres * yres iterations
	int r, g, b, iy;
	double y;
	char values[] = "@@@###***+++--- ";
	for (int i = 0; i < xres * yres; i++) {
		fin >> r >> g >> b;
		if (!fin) {
			cout << "Error reading stream" << std::endl;
			exit(4);
		}
		// Y = 0.2126R + 0.7152G + 0.0722B (from HW7)
		y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
		// test
		if (y < 0.0 || y >= 256.0) cout << "ERROR!!!!!!!!!!!" << std::endl;
		//    cout << r << " " << g << " " << b;
		//    cout << " => " << y;
		iy = (int)y;
		// iy should be [0...255]
		if (iy < 0 || iy > 255) cout << "ERROR!!!!!!!!!!!!!!" << std::endl;
		//    cout << " => " << iy;
		iy /= 16;
		// iy should be [0...15]
		if (iy < 0 || iy > 15) cout << "ERROR!!!!!!!!!!!!!!" << std::endl;
		//    cout << " => " << iy << endl;
		cout << values[iy];
		if (i % 80 == 79) cout << std::endl;
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
