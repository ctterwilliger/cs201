#pragma once
/**
* file.ccp
* cs201
* Clifton Terwilliger
* 02/00/2021
* name
*/

#ifndef FILE_TOKENIZER_HPP_INCLUDED
#define FILE_TOKENIZER_HPP_INCLUDED


#include <string>
#include <vector>


// Readline
// Grabs line and returns string and true if line is non empty
// else returns false
//		Sample usage:
//			Readline(string);
bool Readline(std::string& str);


// StringToToken
// Converts string to Vector of Tokens
// Returns Number of Tokens added
// Sample Usage:
//		size = StringToToken(string, Vector_of_strings);
unsigned StringToToken(const std::string& input, std::vector<std::string> & tokens);

// AnalyazeTokens
// Identifies and Prints token types from a vector of tokens
// Sample Usage:
//		AnalyzeTokens(Vector_of_Strings);
void AnalyzeTokens(const std::vector<std::string>& tokens);

#endif