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
#include <sstream>
using namespace std;
using std::cin;

bool IscontainerEmpty(std::vector<std::string> text)
{
	if (text.size() == 0)
	{
		return true;
	}
	return false; 
}

void printContainer(std::vector<std::string> contain)
{
	cout << endl << "The container is now: ";
	for (auto n : contain)
	{
		cout << n << " "; 
	}
}
void lifo(std::vector<std::string> & text, std::vector<std::string> & pop)
{
	pop.push_back(text.back());
	cout << text.back() << " is being popped out" << endl;
	std::vector<std::string> placeholder; 
	for (int i = 0; i < text.size() - 1; i++)
	{
		placeholder.push_back(text.at(i));
	}
	text = placeholder; 

}

void fifo(std::vector<std::string>& text, std::vector<std::string>& pop)
{
	pop.push_back(text.front());
	cout << text.front() << " is being popped out" << endl;
	std::vector<std::string> placeholder;
	for (int i = 1; i < text.size(); i++)
	{
		placeholder.push_back(text.at(i));
	}
	text = placeholder;

}

unsigned StringToToken(const std::string& input, std::vector<std::string>& tokens)
{
	//Converts String into vector of tokens
	std::istringstream iss(input);
	std::vector<std::string> token(std::istream_iterator<std::string>{iss},
		std::istream_iterator<std::string>());
	// Adds Tokens to existing vector of strings
	for (auto n : token)
	{
		tokens.push_back(n);
	}
	return token.size();
}

bool fifo_check(std::vector<std::string> compare, std::vector<std::string> pop)
{
	if (compare.size() != pop.size())
	{
		return false;
	}
	for (int i = 0; i < compare.size(); i++)
	{
		if (compare.at(i) != pop.at(i))
		{
			return false; 
		}
	}
	return true; 
}

bool lifo_check(std::vector<std::string> compare, std::vector<std::string> pop)
{
	if (compare.size() != pop.size())
	{
		return false;
	}
	for (int i = 0; i < compare.size(); i++)
	{
		if (compare.at(i) != pop.at(pop.size() - i - 1))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	std::vector<std::string> pop;
	std::vector<std::string> container;
	std::string text; 
	cout << "Please enter a line of words you would like to test LIFO and FIFO on" << endl; 
	std::getline(std::cin, text);
	StringToToken(text, container);
	std::vector<std::string> container2;
	container2 = container;
	std::vector<std::string> container_save;
	container_save = container;
	pop = {};
	while (!(IscontainerEmpty(container)))
	{
		lifo(container, pop);
		printContainer(container); 
		cout << endl; 
	}

	if (lifo_check(container_save, pop))
	{
		cout << "Lifo ran correctly" << endl;
	}
	else
	{
		cout << "Lifo failed" << endl;
	}

	pop = {};
	while (!(IscontainerEmpty(container2)))
	{
		fifo(container2, pop);
		printContainer(container2);
		cout << endl;
	}
	if (fifo_check(container_save, pop))
	{
		cout << "Fifo ran correctly" << endl;
	}
	else
	{
		cout << "Fifo failed" << endl; 
	}

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}