#include <iostream>
#include <math.h>
using namespace std;
using std::cin;

int main()
{
	long long total = 4;
	int place_holder;
	for (long long i = 2; i < 9223372036854775807; i++)
	{
		place_holder = 0;
		for (long long j = 3; j < i; j = j++)
		{
			if (i % j == 0)
			{
				place_holder = 1;
				j = i;
			}
		}
		if (place_holder == 0)
		{
			cout << i << " ";
			total++;
		}
	}
}