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



unsigned StringToToken(const std::string& input, std::vector<std::string> & tokens);


void AnalyzeTokens(const std::vector<std::string>& tokens);

#endif