#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

int RandomBetweenU(int first, int last)
{
	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<> distrib(first, last);
	return distrib(e1);
}

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

int RandomBetween(int first, int last)
{
	return (rand() % last) + first; 
}

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
		HistU[RandomBetweenU(1, 6)]++;

	}
	std::map<int, int> HistN;
	for (int i = 0; i < 1'00'000; i++)
	{
		HistN[RandomBetweenN(1, 6)]++;
	}
	std::map<int, int> HistR;
	for (int i = 0; i < 1'00'000; i++)
	{
		HistR[RandomBetween(1, 6)]++;
	}

	PrintDistribution(HistU);
	PrintDistribution(HistN);
	PrintDistribution(HistR);
	// Seed with a real random value, if available


	/*std::random_device r;
	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 6);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';
	// Generate a normal distribution around that mean
	
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(normal_dist(e2))];
	}
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	*/

}
