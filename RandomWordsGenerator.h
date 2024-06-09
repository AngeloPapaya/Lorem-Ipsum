#pragma once


#include <vector>
#include <ctime>
#include <sstream>

//looks into the lorem ipsum text and provides few random words out of it.
class RandomWordsGenerator
{
public:

	//gets few random words from the lorem ipsum text
	 std::vector<std::string> GetFewRandomWords(const std::vector<std::string>& lines);
	 std::vector<std::string> GetWordsForLine(const std::string& line);

};

