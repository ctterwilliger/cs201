/**
* file.ccp
* cs201
* Clifton Terwilliger
* 04/07/2021
* name
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

bool test_char(std::map<char, int>& map, std::string answer, char guess)
{
	if (map[guess] == 0 or map[guess] == 1)
	{
		cout << "You have already guessed this character" << std::endl; 
		return true;
	}

	std::for_each(answer.begin(), answer.end(), [&](char a) {
		if (guess == a)
		{
			map.at(a) = 1;
		}
		});
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


bool print_game_state(std::map<char, int>& m, std::string answer)
{
	const std::map<char, int> mm = m; 
	cout << "Your correct guesses are: ";
	bool place_holder = true;
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
	std::map<char, int> map;
	std::string alphabet_construct = "abcdefghijklmnopqrstuvwxyz";
	std::for_each(alphabet_construct.begin(), alphabet_construct.end(), [&](char a) mutable
		{
			map.emplace(a, 2);
		}
	);
	std::vector<std::string> body { "left foot", "right foot", "left hand", " right hand", "left leg", "right leg", "left arm", "right arm", "body", "head" };
	cout << "You are playing hangman, you have 10 guesses or you die" << std::endl;
	print_game_state(map, answer);
	int count = 0;
	while (count < 10)
	{
		cout << "Enter a letter" << std::endl;
		char guess;
		cin >> guess; 
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
