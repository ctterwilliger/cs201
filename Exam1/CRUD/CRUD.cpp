/**
* file.ccp
* cs201
* Clifton Terwilliger
* 03/00/2021
* name
*/

#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::cin;


//creates element
void Create(const std::string& key, int value, std::map<std::string, int>& map)
{
	map.emplace(key, value);
}
// checks if key exists then prints key
void Read_Print(const std::string& key, const std::map<std::string, int>& map)
{
	if (map.find(key) != map.end())
	{
		cout << map.at(key) << std::endl;
	}
	else
	{
		cout << "Key not found" << std::endl;
	}
	
}
//checks if key exist then updates key
void Update(const std::string& key, int value, std::map<std::string, int>& map)
{
	if (map.find(key) != map.end())
	{
		map.at(key) = value;
	}
	else
	{
		cout << "Key not found" << std::endl; 
	}
}
//checks if key exists then deletes the key and associated int
void Delete(const std::string& key,  std::map<std::string, int>& map)
{
	if (map.find(key) != map.end())
	{
		map.erase(key);
	}
	else
	{
		cout << "Key not found" << std::endl;
	}
	 
}
int main()
{
	
	std::map<std::string, int> database;
	Create("flamingo", 17, database);
	Delete("llama", database);
	Update("iguaana", 13, database);
	Read_Print("lorikeet", database);
	//Exit code
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
	return 0;
}
