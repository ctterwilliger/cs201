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
#include <algorithm>
#include <ctype.h>
using std::cout;
using std::cin;
struct Record {
	double unitPrice = 0;
	int units = 0;
}bread, toast, garlic_bread, biscuit, dough;

void insert_item(std::map<std::string, Record> & store, std::string input)
{
	std::string item; 
	cout << "Pleae enter the item your would like to add: "; 
	cin >> item;
	if (!(item == "bread" || item == "toast" || item == "garlic bread" || item == "bicuit" || item == "dough"))
	{
		cout << "Your item was not on the list" << std::endl; 
		return;
	}
	cout << "Please enter a positive amount you would like to add: ";
	int num = 0;
	cin >> num; 
	while (num <= 0)
	{
		cout << "Your input was invalid please try again: ";
		cin >> num;
	}
	store.at(item).units += num;
}

void print_cart( std::map<std::string, Record>& store)
{
	cout << "Items in cart are: " << std::endl;
	std::for_each(store.begin(), store.end(), [&](std::pair<std::string, Record> a) { cout << a.second.units << " units of :" << a.first << std::endl; });
}


int main()
{
	std::map<std::string, Record> store;
	toast.unitPrice = 1;
	bread.unitPrice = 1.1;
	garlic_bread.unitPrice = 2.2;
	biscuit.unitPrice = 3.5;
	dough.unitPrice = .9;
	store.emplace("bread", bread);
	store.emplace("toast", toast);
	store.emplace("garlic bread", garlic_bread);
	store.emplace("biscuit", biscuit);
	store.emplace("dough", dough);
	std::string user_input; 
	print_cart(store);

	while (user_input != "checkout")
	{
		print_cart(store);
		cout <<	"Please enter a command, \"add\" , \"remove\" , and \"checkout\" " << std::endl;
		cin >> user_input;
		for (auto& n : user_input)
		{
			n = tolower(n);
		}
		if (user_input.substr(0, 3) == "add")
		{
			insert_item(store, user_input);
		}
		else if(user_input.substr(0, 3) == "remove")
		{

		}
		else if(user_input != "checkout")
		{
			cout << "Your input is invalid" << std::endl; 
		}
	}

	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
