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

//Gets a postive integer from user
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
// gets a postion that is less than the max number and that is not 0
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
	//initatilzation of variables
	bool end = false;
	int x_pos = 0;
	int y_pos = 0;
	int x = 1;
	int y = 1;
	cout << "This program will let you make a grid\n";
	std::vector<std::vector<int>> grid;
	x = get_positive_int("Please enter the width of the grid: ");
	y = get_positive_int("Please enter the hieght of the grid: ");

	//sizes grid so there are no memory errors
	grid.resize(x);
	for (int i = 0; i < x; i++)
	{
		grid[i].resize(y);
	}

	//loops grid draw and user input until user inputs negative number
	do
	{
		//prints grid
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

		//gets user input for x postion and then places it
		cout << "Choose a position to place an x\n";
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
