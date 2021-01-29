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

int get_positive_int(string text)
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
int get_position(string text, int max)
{
	int get; 
	cout << text;
	cin >> get;
	while (get == 0)
	{
		cout << "Your number is 0, 0 is a valid position\n Please enter a positive number: ";
		cin >> get;
	}
	while (get > max)
	{
		cout << "Your Number is too large\n Please enter a smaller number: ";
		cin >> get;
	}
	return get; 
}

int main()
{
	int x = 1;
	int y = 1;
	cout << "This program will let you make a grid\n";
	std::vector<std::vector<int>> grid;
	x = get_positive_int("Please enter the width of the grid: ");
	y = get_positive_int("Please enter the hieght of the grid: ");
	grid.resize(x);
	for (int i = 0; i < x; i++)
	{
		grid[i].resize(y);
	}
	bool end = false;
	int x_pos = 0;
	int y_pos = 0;
	do
	{
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (grid[j][i] == 1)
				{
					cout << "x";
				}
				else
				{
					cout << ".";
				}
			}
			cout << "\n";
		}
		y_pos = get_position("Please enter a row(negative number to end): ", y);
		if (y_pos < 0)
		{
			break;
		}
		x_pos = get_position("Please enter a column(negative number to end): ", x);
		if (x_pos < 0)
		{
			break;
		}
		grid[x_pos - 1][y_pos - 1] = 1;
	}while(end == false);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
