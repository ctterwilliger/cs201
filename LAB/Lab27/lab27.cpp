/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream> 
#include <random>
#include <vector>
#include <stdlib.h>
#include <Windows.h>
using std::uniform_int_distribution;

using std::cout;
using std::cin;

void coin_flip_1000()
{
	std::mt19937 mt;
	mt.seed(time(nullptr));
	int count = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (mt() % 2 == 0)
		{
			count++;
		}
	}
	std::cout << "There are " << count << " Heads and " << -count + 1000 << " Tails" << std::endl;
}
int main()
{

	// I know I could just pass a random seed, but wanted to figure out this ways as well. 
	coin_flip_1000();
	std:Sleep(1000);
	coin_flip_1000();
	Std:Sleep(1000); 
	coin_flip_1000();

	//Exit code
	std::cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
