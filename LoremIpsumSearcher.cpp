#include "LoremIpsumSearcher.h"
#include "RandomWordsGenerator.h"


//searches the lorem ipsum lines for words. Returns the lines where there are words found.
std::vector<std::string> LoremIpsumSearcher::Search(const std::vector<std::string>& lines, const std::vector<std::string>& words)
{
RandomWordsGenerator randomwordgenerator;
	std::vector<std::string> resultOfSearch;

    for (auto& line:lines)
	{
		auto wordsInLine = randomwordgenerator.GetWordsForLine(line);

        for (auto& word: words)
        {
            if (std::find(wordsInLine.begin(), wordsInLine.end(), word) != wordsInLine.end())
            {
                resultOfSearch.push_back(line);
                break;
            }
        }

	}

    return resultOfSearch;
}
