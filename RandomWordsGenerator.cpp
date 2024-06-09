#include "RandomWordsGenerator.h"


//gets few random words from the lorem ipsum text
std::vector<std::string> RandomWordsGenerator::GetFewRandomWords(const std::vector<std::string>& lines)
{
    std::vector<std::string> result;
    srand((unsigned int)time(nullptr));

    for (int i = 0; i < 3; ++i)
    {
        int lineIndex = rand() % lines.size();
        const std::string& line = lines.at(lineIndex);
        std::vector<std::string> words = GetWordsForLine(line);
        result.push_back(words.at(rand() % words.size()));
    }
	return result;
}

//splits the single line of text into words
std::vector<std::string> RandomWordsGenerator::GetWordsForLine(const std::string& line)
{
    std::vector<std::string> result;
    std::string word;
    std::istringstream stream(line);

    while (getline(stream, word, ' '))
    {
        result.push_back(word);
    }

	return result;
}
