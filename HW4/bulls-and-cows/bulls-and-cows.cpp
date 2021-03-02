/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::cin;

bool get_guess(std::string & guess)
{
	std::string text; 
	cout << "Please enter a 4 digit guess(negative numbers to give up): ";
	cin >> text; 
	do
	{ 
		if (text[0] == '-')
		{
			return false;
		}
		if (isdigit(text[0]) && isdigit(text[1]) && isdigit(text[2]) && isdigit(text[3]))
		{
			guess = text;
			return true;
		}
		cout << "Your number was not a 4 digit number" << endl;
		cout << "Please enter a 4 digit guess(negative numbers to give up): ";
		cin >> text;
		
	} while (true); 
	
}

bool cow_check(std::vector<char> sol, std::string guess, int i)
{
	for (int j = 0; j < 4; i++)
	{
		if (guess.at(i) == sol.at(j)
		{
			return true;
		}
	}
	return false; 
}

int main()
{
	std::vector<char> solution{ '5' , '7', '8', '2' };
	std::string guess; 
	int bulls; 
	int cows;
	while (get_guess(guess)
	{
		cows = 0;
		bulls = 0;
		for (int i; i < guess.size(i++)
		{
			if (guess.at(i) == solution.at(i))
			{
				bulls++
			}
			else if(guess.at(i) == )
			{

			}
		}
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}