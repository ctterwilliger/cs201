/**
* grid.ccp
* Clifton Terwilliger
* 1/29/2021
* Grid
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::cin;

int get_pos_int(string text)
{
	cout << text; 
	int get;
	cin >> get;
	while (get < 0)
	{
		cout << "Your imput Is not a positive integer\n";
		cout << "Enter a positive integer: ";
		cin >> get;
	}
	return get;
}

int main()
{
	int x = 1;
	int y = 1;
	cout << "This program will let you make a grid\n";
	x = get_pos_int("Please enter the width of the grid: ");
	y = get_pos_int("Please enter the hieght of the grid: ");
	do
	{
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (grid[j][i] ==)
				cout << ".";
			}
			cout << "\n";
		}

	}while()
	std::vector<std::vector<int>> grid;
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
