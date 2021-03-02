/**
* bulls-and-cows.ccp
* cs201
* Clifton Terwilliger
* 03/01/2021
* Plays the game of cows and bulls
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::cin;
//gets string guess from user
bool get_guess(std::string & guess)
{
	std::string text; 
	cout << "Please enter a 4 digit guess(negative numbers to give up): ";
	cin >> text; 
	do
	{ 
		// checks for negativity
		if (text[0] == '-')
		{
			return false;
		}
		// checks if the first 4 are digits
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

// checks for cows
bool cow_check(std::vector<char> sol, std::string guess, int i)
{
	for (int j = 0; j < 4; j++)
	{
		if (guess.at(i) == sol.at(j))
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
	//runs until negative input or player wins
	while (get_guess(guess))
	{
		cows = 0;
		bulls = 0;
		for (int i = 0; i < guess.size(); i++)
		{
			if (guess.at(i) == solution.at(i))
			{
				bulls++;
			}
			else if(cow_check(solution, guess, i))
			{
				cows++;
			}
		}

		//checks for win
		if (bulls == 4)
		{
			cout << "you guessed correctly, you win" << endl;
			break;
		}
		cout << "You guess had: " << cows << " cows and " << bulls << " bulls" << endl; 
	}
	cout << "The solution was: ";

	//prints solution
	for (auto n : solution)
	{
		cout << n; 
	}
	cout << endl;
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}