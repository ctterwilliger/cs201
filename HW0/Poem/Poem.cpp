/**
*Poem.ccp
* Clifton Terwilliger
* 20 Jan 21
* Peom
*/

#include <iostream>
using namespace std;
using std::cin;
int main()
{
	//Prints poem exirpt
	cout << "My little horse must think it queer\nTo stop without a farmhouse near\nBetween the woods and frozen lake\nThe darkest evening of the year.\n";
	cout << "~Robert Frost\n";
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
