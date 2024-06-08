#include "LoremIpsumSearcher.h"
#include "RandomWordsGenerator.h"

#include <sstream>
#include <unordered_set>
#include <algorithm>

using namespace std;

//searches the lorem ipsum lines for words. Returns the lines where there are words found.
vector<string> LoremIpsumSearcher::Search(vector<string>& lines, const vector<string>& words)
{
RandomWordsGenerator randomwordgenerator;
	vector<string> resultOfSearch; // empty
//	for (vector<string>::const_iterator a = lines.cbegin(); a != lines.cend(); ++a)
    for (auto& line:lines)
	{
		auto wordsInLine = randomwordgenerator.GetWordsForLine(line);
//		for (auto foo = wordsInLine.cbegin(); foo != wordsInLine.cend(); ++foo)
//        for (word:words )
//        if (std::find(word in line)){
//            resultOfSearch.push_back(line);
//        }

        for (auto& word: words)
        {
            if (std::find(wordsInLine.begin(), wordsInLine.end(), word) != wordsInLine.end())
            {
                resultOfSearch.push_back(line);
                break;
            }
        }


//			for (vector<string>::const_iterator local = words.cbegin(); local != words.cend(); ++local)
//			{
//				if (*foo == *local)
//				{
//					if (std::find(set.cbegin(), set.cend(), line) == set.cend())
//					{
//						set.insert(line);
//					}
//				}
//			}

	}
//	return vector<string>(set.begin(), set.end());
    return resultOfSearch;
}

//splits the line of text into words
//vector<string> LoremIpsumSearcher::GetWordsForLine(string& line)
//{
//	vector<string> result;
//	string word;
//	istringstream stream(line);
//	while (getline(stream, word, ' '))
//	{
//		result.push_back(word);
//	}
//	return result;
//}
