#pragma once
#include <string>
#include <iostream>
#ifndef FILE_STUDENT_HPP_INCLUDED
#define FILE_STUDENT_HPP_INCLUDED

class Student {
public:
	Student();

	Student(std::string);

	Student(std::string name, int id);

	void printInfo() const;
private:
	int _id;
	std::string _name; 

};

#endif