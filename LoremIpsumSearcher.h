#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>
#include <algorithm>

//searches the text of lorem ipsum for rows containing words to search
class LoremIpsumSearcher
{
	//splits the line of text into words
	std::vector<std::string> GetWordsForLine(std::string& line);

public:
	//searches the lorem ipsum lines for words. Returns the lines where there are words found.
	std::vector<std::string> Search(const std::vector<std::string>& lines, const std::vector<std::string>& words);
};

