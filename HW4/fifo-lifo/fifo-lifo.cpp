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
void lifo(std::string text, std::vector<char> & pop)
{
	pop = {}; 
	for (int i = 0; i < text.size(); i++)
	{
		
		pop.push_back(text[i]);
		cout << "out pops " << text[i] << " container is now ";
		for (int j = 0; j + i + 1 < text.size(); j++)
		{
			cout << text.at(j);
		}
		cout << endl; 
	}
}


int main()
{
	std::vector<char> pop;
	std::string text;
	cin >> text; 
	lifo(text, pop);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}