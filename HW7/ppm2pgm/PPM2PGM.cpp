/**
* PPM@PGM.ccp
* cs201
* Clifton Terwilliger
* 04/19/2021
* converts parrot.ppm to parrot.pgm
*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using std::cout;
using std::cin;
int main()
{
	cout << "This program prints a ppm file to ascii art" << std::endl;

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

	// this handles comments
	std::string comment = "";
	do
	{
		fin >> comment;
		if (comment.at(0) == '#')
		{
			cout << comment << std::endl;
		}
	} while (comment.at(0) == '#');

	int xres, yres, maxval;
	xres = std::stoi(comment);
	fin >> yres >> maxval;
	if (!fin) {
		cout << "Error reading stream" << std::endl;
		exit(3);
	}

	cout << "Image size: " << xres << " x " << yres << std::endl;
	cout << "Maxval = " << maxval << std::endl;

	// loop for xres * yres iterations
	int r, g, b, iy;
	// creates and write meta data
	std::ofstream fout("parrot.pgm");
	if (!fout.is_open())
	{
		cout << "Error creating file" << std::endl;
		exit(4);
	}
	fout << "p5" << "\n"; 
	fout << xres << " " << yres << "\n"; 
	fout << maxval << "\n";

	int y;
	for (int j = 0; j < xres; j++) 
	{
		for (int i = 0; i < yres; i++)
		{
			fin >> r >> g >> b;
			if (!fin) {
				cout << "Error reading stream" << std::endl;
				exit(4);
			}
			// Y = 0.2126R + 0.7152G + 0.0722B (from HW7)
			y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
			// test
			if (y < 0.0 || y >= 256.0) cout << "ERROR!!!!!!!!!!!" << std::endl;
			fout << y << " ";
		}
		fout << "\n";
	}
	fout.close(); 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
