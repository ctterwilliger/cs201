/**
* names.ccp
* cs201
* Clifton Terwilliger
* 2/08/2021
* names
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::cin;

//Ask user for 10 names and assigns said names to vector
void InputNames(std::vector<std::string> & names)
{
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		cout << "Please enter a name "<< i + 1 <<": ";
		std::getline(cin, name);
		names.push_back(name);
	}
}

//prints entire string vector
void print(std::vector<std::string> print)
{
	for (int i = 0; i < print.size(); i++)
	{
		cout << "Name " << i + 1 << ": " << print[i] << '\n'; 
	}
}

// compares string with an array of strings, returns true if array contains it
bool find_string(std::vector<std::string> string, std::string search)
{
	for (int i = 0; i < string.size(); i++)
	{
		if (string[i] == search)
		{
			return true;
		}
	}
	return false; 
}

// takes vector of strings and adds a value to the char to cipher it. 
void cipher_string(std::vector< std::string> & cipher)
{
	for (int i = 0; i < cipher.size(); i++)
	{
		for (int j = 0; j < cipher[i].size(); j++)
		{
			cipher[i][j] = cipher[i][j] + 1;
		}
	}
}

int main()
{
	std::vector<std::string> name;
	InputNames(name);
	print(name);
	std::string search; 

	//prints true or false based on if user input is in vector
	std::getline(cin, search); 
	if (find_string(name, search) == true)
	{
		cout << "the string was inputed\n";
	}
	else
	{
		cout << "The string was not inputed\n";
	}
	//creates cipher vector and prints it
	std::vector<std::string> cipher; 
	cipher = name; 
	cipher_string(cipher);
	print(cipher);

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');

	return 0;
}
