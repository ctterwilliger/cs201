#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

bool is_prime(long long num, long long stop)
{
	if (num % 3 == 0)
	{
		return false;
	}
	if (num % 5 == 0)
	{
		return false;
	}
	if (num % 7 == 0)
	{
		return false;
	}
	for (long long j = 11; j < stop; j += 2)
	{
		if (num % j == 0)
		{
			return false;
		}
		j += 2;
		if (num % j == 0)
		{
			return false;
		}
		j += 4;
		if (num % j == 0)
		{
			return false;
		}
		j += 2;
		if(num % j == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long long total = 0;
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
	end_point++;
	// prints the up to 2, 3, 5, 7 which are know primes
	for (long long i = 2; i < end_point && i < 7; i ++)
	{
		place_holder = true;
		for (long long j = 3; j < i; j ++ )
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


	long long stop;
	for (long long i = 11; i < end_point; i += 2)
	{
		stop = sqrt(i) + 1;
		if (is_prime(i, stop))
		{
			cout << i << " ";
				total++;
		}
	}
	cout << std::endl <<"Total: " << total;
}