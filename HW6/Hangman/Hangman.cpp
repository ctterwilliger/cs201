/**
*Hangman.ccp
* cs201
* Clifton Terwilliger
* 04/07/2021
* Its hangman the game
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <ctype.h>
#include <stdio.h>
using std::cout;
using std::cin;

//checks if a char is in the answer
bool test_char(std::map<char, int>& map, std::string answer, char guess)
{
	//checks if it been guessed before and breaking if it has
	if (map[guess] == 0 or map[guess] == 1)
	{
		cout << "You have already guessed this character" << std::endl; 
		return true;
	}

	//checks if it is in the answer and setting the value of the key to one
	std::for_each(answer.begin(), answer.end(), [&](char a) {
		if (guess == a)
		{
			map.at(a) = 1;
		}
		});
	//checks if key is one, if so the user was correct
	if (map.at(guess) == 1)
	{
		cout << "Your guess is correct" << std::endl; 
		return true;
	}
	else
	{
		map.at(guess) = 0; 
		cout << "Your guess is incorrect" << std::endl; 
		return false;
	}
}

//prints the games state
bool print_game_state(std::map<char, int>& m, std::string answer)
{
	const std::map<char, int> mm = m; 
	cout << "Your correct guesses are: ";
	bool place_holder = true;
	//prints what letters in the answer have been solved, by seeing if the key is 1
	std::for_each(answer.begin(), answer.end(), [&](char a) mutable {
		if (mm.at(a) == 1)
		{
			cout << a << " ";
		}
		else
		{
			cout << "_ ";
			place_holder = false;
		}
		});
	//prints incorrect guess by printing all the keys set to  the non defualt 0
	cout << "\nIncorrect guesses are: ";
	std::for_each(mm.begin(), mm.end(), [&](std::pair<char, int> pair) {
		if (pair.second == 0)
		{
			cout << pair.first << " ";
		}
	});
	cout << std::endl; 
	return place_holder;
}


int main()
{
	std::string answer = "hello";
	//Makes a map of aphabet keys and int elements, 2 by default, and 0 if user guessed and is wrong, and 1 if user guessed and is right
	std::map<char, int> map;
	std::string alphabet_construct = "abcdefghijklmnopqrstuvwxyz";
	std::for_each(alphabet_construct.begin(), alphabet_construct.end(), [&](char a) mutable
		{
			map.emplace(a, 2);
		}
	);
	// A vector to iterate through for when the user guesses incorrectly
	std::vector<std::string> body { "left foot", "right foot", "left hand", " right hand", "left leg", "right leg", "left arm", "right arm", "body", "head" };
	cout << "You are playing hangman, you have 10 guesses or you die" << std::endl;
	print_game_state(map, answer);
	int count = 0;
	//runs until user produces 10 incorrect guesses
	while (count < 10)
	{
		cout << "Enter a letter" << std::endl;
		char guess;
		cin >> guess; 
		//checks user input, and then calls function
		if (std::isalpha(guess))
		{
			guess = std::tolower(guess);
			if (!test_char(map, answer, guess))
			{
				cout << "You lost your " << body.at(count) << std::endl;
				count++;
			}
			if (print_game_state(map, answer))
			{
				cout <<"You win\n";
				break;
			}
			
		}
		else
		{
			cout << "You guess was not a letter" << std::endl;
		}
		
	}

	if (count == 10)
	{
		cout << "You are dead, you lose\n" << "The word was: " << answer << std::endl;
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
