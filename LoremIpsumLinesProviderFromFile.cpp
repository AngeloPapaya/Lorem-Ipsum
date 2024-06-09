#include "LoremIpsumLinesProviderFromFile.h"

// Gets the Lorem Ipsum text
std::vector<std::string> LoremIpsumLinesProviderFromFile::GetLoremIpsumLines()
{
    try
    {
        std::ifstream file(_fileName);
        if (!file)
        {
           throw std::runtime_error("unable to open lorem ipsum file");
        }

        std::vector<std::string> result;
        std::string currentLine;
        while (getline(file, currentLine))
        {
            result.push_back(currentLine);
        }

        return result;
    }

	catch (const std::exception& e)
	{
	    std::cerr << "Error: " << e.what() << "\n";
	}
}
