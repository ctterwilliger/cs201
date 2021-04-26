#include <iostream>
#include <math.h>
using namespace std;
using std::cin;

int main()
{
	long long total = 1;
	bool place_holder;
	cout << "2 ";
	for (long long i = 3; i < 9223372036854775807; i += 2)
	{
		place_holder = true;
		for (long long j = 3; j < i; j = j +=2)
		{
			if (i % j == 0)
			{
				place_holder = false;
				break;
			}
		}
		if (place_holder)
		{
			cout << i << " ";
			total++;
		}
	}
}