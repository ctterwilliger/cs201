/**
* file.ccp
* cs201
* Clifton Terwilliger
* 04/07/2021
* name
*/




#include <iostream>
#include <vector>
#include <map>
struct Record {
	double unitPrice;
	int units = 0;
}bread, toast, garlic_bread, biscuit, dough;

void insert_item(std::map<std::string, Record> & store, int num, std::string item)
{
	store.at(item).units = num;
}

using std::cout;
using std::cin;
int main()
{
	std::map<std::string, Record> store;
	toast.unitPrice = 1;
	bread.unitPrice = 1.1;
	garlic_bread.unitPrice = 2.2;
	biscuit.unitPrice = 3.5;
	dough.unitPrice = .9;
	store.emplace("bread", bread);
	store.emplace("Toast", toast);
	store.emplace("garlic bread", garlic_bread);
	store.emplace("biscuit", biscuit);
	store.emplace("dough", dough);


	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
