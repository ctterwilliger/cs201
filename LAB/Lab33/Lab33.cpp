/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
class Potato { 
public: 
	void setName(std::string name)
	{
		_name = name;
	}
	std::string getName() const {
		return _name;
	}
	void setPower(int power)
	{
		_power = power;
	}
	int getPower() const {
		return _power;
	}
	std::string toString() {
		return "Potatoes name is: " + getName() + ", power level: " + std::to_string(getPower()) + "\n";
	}
private:
	std::string _name;
	int _power;
};

int main()
{	
	Potato SuperPotato;
	Potato BakedPotato; 
	SuperPotato.setName("Super Potato");
	BakedPotato.setName("Baked Potato");
	SuperPotato.setPower(9001);
	BakedPotato.setPower(1);

	cout << SuperPotato.toString() << BakedPotato.toString();
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
