/**
* game.ccp
* Clifton Terwilliger
* 20 Jan 21
* Game
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	//Prints Decription
	cout << "Ark Survival Evolved\nDinasaur Survival Game, progress from bare fists, to tools more advanced than current humans.\n";
	cout << "Has a fantastic yet not nessesary story\nYou can fight dinosaurs and even other players.\nYou can tame and ride dinasaurs, and harvest resources.\nUltimate Goal: Survive\n";
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
