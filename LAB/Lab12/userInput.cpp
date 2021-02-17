/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using std::cin;
void Input(std::vector<std::string> & input)
{
	std::string placeholder_input;
	input.resize(1);
	input.at(0) = "";
	for (int i = 0; input.at(i) != "end"; i++)
	{
		cout << "Please enter a word: ";

		cin >> placeholder_input;
		input.push_back(placeholder_input);
	}
}

void Output(std::vector<std::string> output)
{
	for (int i = 0; i < output.size(); i++)
	{
		cout << output.at(i) << " ";
	}
}