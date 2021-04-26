#include <iostream>
#include <math.h>
#include <string>
using namespace std;
using std::cin;

int main()
{
	long long total = 4;
	bool place_holder;
	// we know these are prime
	cout << "This program will find all primes up to your number" << std::endl; 
	cout << "Please enter your number(positive): ";
	long long end_point;
	cin >> end_point; 
	while (end_point < 0)
	{
		cout << "Your number was not postive\nPlease enter a positive number: ";
		cin >> end_point;
	}
	
	// prints the up to 2, 3, 5, 7 which are know primes
	for (int i = 0; i < end_point || i < 7; i++)
	{
		place_holder = true;
		for (long long j = 3; j < i; j = j += 2)
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
	
	for (long long i = 11; i < 9223372036854775807; i += 2)
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
	cout << "\n Total" << total;
}