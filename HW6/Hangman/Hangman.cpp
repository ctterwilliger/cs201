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
using std::cout;
using std::cin;

void test_char(std::map<char, int>& map, std::string answer, char guess)
{
	if (map[guess] == 0 or map[guess] == 1)
	{
		cout << "You have already guessed this character" << std::endl; 
		return;
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
		return;
	}
	else
	{
		map.at(guess) = 0; 
		cout << "Your guess is incorrect" << std::endl; 
	}
}


void print_game_state(std::map<char, int>& m, std::string answer)
{
	const std::map<char, int> mm = m; 
	cout << "Your correct guesses are: ";
	std::for_each(answer.begin(), answer.end(), [&](char a) mutable {
		if (mm.at(a) == 1)
		{
			cout << a << " ";
		}
		else
		{
			cout << "_ ";
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

	print_game_state(map, answer);
	test_char(map, answer, 'a');
	test_char(map, answer, 'e');
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
