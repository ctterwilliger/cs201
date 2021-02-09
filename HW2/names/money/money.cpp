/**
* file.ccp
* cs201
* Clifton Terwilliger
* 1/29/2021
* name
*/

#include <iostream>
#include <string>
using namespace std;
using std::cin;

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

void print_coin(std::string text, int i, std::string text_2)
{
	cout << text << i << text_2;
	if (i != 1)
	{
		cout <<"s\n"
	}
}

void print_coin_alt_plur(std::string text, int i, std::string text_)
{
	cout << text << i << text_2;
	if (i == 1)
	{
		cout << "ies\n";
	}
	else
	{
		cout << "y\n";
	}
int main()
{
	cout << "This program will calculate the total value of all your coins\n";
	int pennies = input("Please enter the number of pennies you have: ");
	int nickles = input("Please enter the number of pennies you have: ");
	int dimes = input("Please enter the number of pennies you have: ");
	int quarters = input("Please enter the number of pennies you have: ");
	int 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
