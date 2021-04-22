#include <string>
#include <iostream>
#include "student.hpp"
Student::Student()
{
	_id = 0;
	_name = ""; 
}

Student::Student(std::string name)
{
	_id = 0;
	_name = name;
}
Student::Student(std::string name, int id)
{
	_id = id;
	_name = name;
}
void Student::printInfo() const
{
	std::cout << _id << " " << _name << std::endl; 
}