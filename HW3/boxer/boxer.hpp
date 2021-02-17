/**
* boxer.hpp
* cs201
* Clifton Terwilliger
* 02/17/2021
* header file for boxer.cpp
*/
#ifndef FILE_BOXER_HPP_INCLUDED
#define FILE_BOXER_HPP_INCLUDED

#include <string>
// get_int
// Prints please enter a positive integer, Gets integer from text, checks to make sure integer is greater than 0. If not ask for another input. 
// Sample Usage:
//		int i = get_int(); 
int get_int();


//get string
//Prints "please enter a word" then return input from user. 
// Sample Usage:
//      std::string text;
//      text = get_string; 
std::string get_string();


//print
//print a box around a word with width of inputed integer 
//Sample Usage:
//		print(int, string);
void print(int box_width, std::string text);
#endif