/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <vector>
#include <algorithm> 
#include <utility> 
#include <iterator>
using std::cout;
using std::cin;
int main()
{
	std::vector<int> vv{ 1, 3, 5 ,7, 9 };
	std::vector<int> bb{ 1,3, 7, 15, 31 };
	
	
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> mypair; 
	mypair = std::mismatch(vv.begin(), vv.end(), bb.begin(), bb.end());
	if (mypair.first == vv.end())
	{
		cout << "there was no mismatch" << std::endl;
	}
	else
	{
		std::cout << "First mismatching elements: " << *mypair.first;
		std::cout << " and " << *mypair.second << '\n';
	}
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
