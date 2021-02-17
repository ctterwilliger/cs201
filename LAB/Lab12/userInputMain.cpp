/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/
#include <vector>
#include <string>
#include "userInput.hpp"
#include <iostream>
using namespace std;
using std::cin;
int main()
{
	std::vector<std::string> user_words;
	Input(user_words);
	Output(user_words);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}