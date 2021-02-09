/**
* money.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* Calculates money
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;

//gets user input for positive int
int input(std::string text)
{
	int i =  0;
	cout << text;
	cin >> i;
	while (i < 0)
	{
		cout << "Please enter a positive number: ";
		cin >> i; 
	}
	return i;
 }

// prints coin value and plural
void print_coin(std::string text, int i, std::string text_2)
{
	cout << text << i << text_2;
	if (i != 1)
	{
		cout << "s";
	}
	cout << "\n";
}

//print coin value  and plural for ies
void print_coin_alt_plur(std::string text, int i, std::string text_2)
{
	cout << text << i << text_2;
	if (i != 1)
	{
		cout << "ies\n";
	}
	else
	{
		cout << "y\n";
	}
}

int main()
{
	cout << "This program will calculate the total value of all your coins\n";
	int pennies = input("Please enter the number of pennies you have: ");
	int nickles = input("Please enter the number of nickles you have: ");
	int dimes = input("Please enter the number of dimes you have: ");
	int quarters = input("Please enter the number of quarters you have: ");
	int half_dollars = input("Please enter the number of half dollars you have: ");

	print_coin_alt_plur("You have ", pennies, " penn");
	print_coin("You have ", nickles, " nickle");
	print_coin("You have ", dimes, " dime");
	print_coin("You have ", quarters, " quarter");
	print_coin("You have ", half_dollars, " half dollar");
	float total = (pennies * .01) + (nickles * .05) + (dimes * .1) + (quarters * .25) + (half_dollars * .5);
	cout << "Your total is $"<< total << '\n';
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
