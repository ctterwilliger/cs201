/**
* Shopping.ccp
* cs201
* Clifton Terwilliger
* 04/07/2021
* Rudementary shopping system
*/




#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <ctype.h>
#include <numeric>
using std::cout;
using std::cin;
//Creates items to sell
struct Record {
	double unitPrice = 0;
	int units = 0;
}bread, toast, garlic_bread, biscuit, dough;

//takes map and then requests user for item to add to, then amount and set the key of that value to that amount
void insert_item(std::map<std::string, Record> & store, std::string input)
{
	std::string item; 
	cout << "Pleae enter the item your would like to add: "; 
	cin >> item;
	//checks if it belongs to the map
	for (auto& n : item)
	{
		n = tolower(n);
	}
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
	//sets element at key to num + current value
	store.at(item).units += num;
}

//sets element to 0 of key
void remove_item(std::map<std::string, Record>& store, std::string input)
{
	std::string item;
	cout << "Pleae enter the item your would like to remove: ";
	cin >> item;
	for (auto& n : item)
	{
		n = tolower(n);
	}
	if (!(item == "bread" || item == "toast" || item == "garlic bread" || item == "bicuit" || item == "dough"))
	{
		cout << "Your item was not on the list" << std::endl;
		return;
	}
	store.at(item).units = 0;
}

//prints through items and there amount
void print_cart( std::map<std::string, Record>& store)
{
	cout << "Items in cart are: " << std::endl;
	std::for_each(store.begin(), store.end(), [&](std::pair<std::string, Record> a) { cout << a.second.units << " units of :" << a.first << std::endl; });
}


int main()

{
	//creates varibles, map and values of items
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

	//runs until users inputs checkout
	while (user_input != "checkout")
	{
		print_cart(store);
		cout << "Please enter a command, \"add\" , \"remove\" , and \"checkout\" " << std::endl;
		cin >> user_input;
		//sets all elemets to lower case for logic purposes
		for (auto& n : user_input)
		{
			n = tolower(n);
		}
		//checks what user command
		if (user_input.substr(0, 3) == "add")
		{
			insert_item(store, user_input);
		}
		else if (user_input.substr(0, 6) == "remove")
		{
			remove_item(store, user_input);
		}
		else if (user_input != "checkout")
		{
			cout << "Your input is invalid" << std::endl;
		}
	}

	cout << "Your total is: ";
	double total = 0;
	for (auto n : store)
	{
		total += n.second.units * n.second.unitPrice; 
	}
	cout << total << std::endl; 
	//I could not get the accumulate function to work, after about an hour and half of trying to figure it out, below is my best attempt. 
	/*
	int total = std::accumulate(store.begin(), store.end(), 0, [&](std::pair<std::string, Record> pair) {return pair.second.units * pair.second.unitPrice;});
	cout << total << std::endl; 
	*/ 
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
