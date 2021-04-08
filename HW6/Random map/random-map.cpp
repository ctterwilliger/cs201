/**
* random-map.ccp
* cs201
* Clifton Terwilliger
* 04/06/2021
* Randomly generates a map, and prints distribution
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

//Return a Uniformly Random number
int RandomBetweenU(int first, int last)
{
	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<> distrib(first, last);
	return distrib(e1);
}

//Returns a number that is uniformly distrubted around a the midpoint of a the range inputed.
int RandomBetweenN(int first, int last)
{
	std::random_device r;
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	float placeholder = first + last;
	float midpoint = (placeholder) / 2; 
	std::normal_distribution<> normal_dist(midpoint, 1);
	int i; 
	do
	{
		i = rint(normal_dist(e2));
	} while(i < first || i > last);
	return i;
}

//returns a number using rand
int RandomBetween(int first, int last)
{
	return (rand() % last) + first; 
}

//Prints the distrbution of a map with values
void PrintDistribution(const std::map<int, int> & numbers)
{
	int map_range = numbers.size();
	int map_size = 0; 
	int print_average_bar_length = 50;
	for (const auto & n : numbers)
	{
		map_size += n.second; 
	}
	for (const auto & p : numbers)
	{
		//prints a the key and the associted number of *s so that the average is 50 per line
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / (map_size/(map_range * print_average_bar_length)), '*') << '\n';
	}
}


int main()
{
	srand(time(NULL));
	std::map<int, int> HistU;
	for (int i = 0; i < 1'00'000; i++)
	{
		//adds one to a random key from 1-6
		HistU[RandomBetweenU(1, 6)]++;

	}
	std::map<int, int> HistN;
	for (int i = 0; i < 1'00'000; i++)
	{
		//adds one to a random key from 1-6
		HistN[RandomBetweenN(1, 6)]++;
	}
	std::map<int, int> HistR;
	for (int i = 0; i < 1'00'000; i++)
	{
		//adds one to a random key from 1-6
		HistR[RandomBetween(1, 6)]++;
	}
	//Prints results
	std::cout << "Uniform Disribution" << std::endl;
	PrintDistribution(HistU);
	std::cout << "Normal Disribution" << std::endl;
	PrintDistribution(HistN);
	std::cout << "Random Disribution" << std::endl;
	PrintDistribution(HistR);
}
