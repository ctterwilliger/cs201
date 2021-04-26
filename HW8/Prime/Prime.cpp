#include <iostream>
#include <math.h>
#include <time.h>
using std::cout;
using std::cin;

//checks for prime
bool is_prime(long long num, long long stop)
{
	// checks for 3, 5, 7 divisiblity
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
	// then checks for numbers that includes all previous primes with some extra, up to the sqrt of the number
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
	// asks user for input then error checks
	cout << "This program will find all primes up to your number" << std::endl; 
	cout << "Please enter your number(positive): ";
	long long end_point;
	cin >> end_point; 
	while (end_point < 0)
	{
		cout << "Your number was not postive\nPlease enter a positive number: ";
		cin >> end_point;
	}
	//makes it so we dont have to compare equal to for the stop point
	end_point++;
	//starts clock1
	clock_t timer = clock(); 
	int place_holder2;

	// old progrom to check for primes
	for (long long i = 2; i < end_point; i++)
	{
		place_holder2 = 0;
		for (long long j = 2; j < i; j = j++)
		{
			if (i % j == 0)
			{
				place_holder2 = 1;
				j = i;
			}
		}
		if (place_holder2 == 0)
		{
			//cout << i << " ";
			total++;
		}
	}
	//prints time and total
	cout << std::endl << "Total: " << total;
	timer = clock() - timer;
	printf("  approximately %f seconds", (float)timer / CLOCKS_PER_SEC);
	total = 0;

	//starts clock
	clock_t timer2 = clock();
	// prints the up to 2, 3, 5, 7 which are know primes
	for (long long i = 2; i < end_point && i <= 7; i ++)
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
			//cout << i << " ";
			total++;
		}
	}

	//faster prime fucntions, checks for numbers with digits 1, 3, 7, 9 and check if they are prime 
	long long stop; //this will be approximently the sqrt of the prime, which is what we have to check up to
	for (long long i = 11; i < end_point; i += 2)
	{
		stop = sqrt(i) + 1;
		if (is_prime(i, stop))
		{
			//cout << i << " ";
				total++;
		}
		stop += 2;
		i += 2;
		if (is_prime(i, stop))
		{
			//cout << i << " ";
			total++;
		}
		stop += 4;
		i += 4;
		if (is_prime(i, stop))
		{
			//cout << i << " ";
			total++;
		}
		stop += 2;
		i += 2;
		if (is_prime(i, stop))
		{
			//cout << i << " ";
			total++;
		}
	}
	cout << std::endl <<"Total: " << total;
	timer2 = clock() - timer2;
	printf("  approximately %f seconds", (float)timer2 / CLOCKS_PER_SEC);
}