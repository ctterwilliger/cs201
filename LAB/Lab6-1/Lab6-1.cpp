/**
* Lab6.ccp
* cs201
* Clifton Terwilliger
* 2/1/2021
* Lab 6
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::cin;

//prints string
void print(string text)
{
	cout << text << "\n";
}

void print_2(string text)
{
	int size = text.size();
	for (int i = 0; i < size; i++)
	{
		cout << "#";
	}
	cout << '\n';
}

void print_back(string text)
{
	int size = text.size();
	for (int i = size - 1; i >= 0; i--)
	{
		cout << text[i];
	}
	cout << '\n';
}


void print_length(string text)
{
	cout << "Your message is " << text.size() << " character\n";
}

int main()
{
	cout << "Please enter a message\n";
	string input;
	cin >> input; 
	print(input);
	print_length(input);

	cout << "Additional Function\n";
	print_2(input);

	cout << "Additional Function 2\n";
	print_back(input);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
