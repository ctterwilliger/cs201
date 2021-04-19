/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using std::cout;
using std::cin;
int main()
{
	std::ofstream fout("text.txt");
	if (!fout) {
		cout << "Error opening file" << std::endl;
		return 1; 
	}
	for (int i = 0; i < 10; i++)
	{
		fout << "Hello" << std::endl; 
		if (!fout) {
			cout << "Error Writing to file" << std::endl;
			return 1;
		}
	}
	fout << std::endl; 
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			fout << std::setw(3) << i + j * 10 + 1<< " ";
		}
		fout << std::endl; 
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
