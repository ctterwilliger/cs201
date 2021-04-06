/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>

#include <vector>
float sumVector(std::vector<float> sum)
{
	double i = 0;
	for (auto n : sum)
	{
		i += n;
	}
	return i;
}
using namespace std;
using std::cin;
int main()
{
	std::vector<float> floats{ 1.1, 1.2, 1.3 };
	double i;
	i = sumVector(floats);
	cout << i;
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}