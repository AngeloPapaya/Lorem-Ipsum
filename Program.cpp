#include "LoremIpsumLinesProviderFromFile.h"
#include "RandomWordsGenerator.h"
#include "LoremIpsumSearcher.h"
#include "Printer.h"


int main()
{

	//load lines of lorem ipsum text
	LoremIpsumLinesProviderFromFile linesProvider("lorem_ipsum.txt");
	std::vector<std::string> lines = linesProvider.GetLoremIpsumLines();

    RandomWordsGenerator randomWordsGenerator;
    LoremIpsumSearcher loremIpsumSearcher;


    //get few random words
    std::vector<std::string> randomWords = randomWordsGenerator.GetFewRandomWords(lines);

    //search these words in the lorem ipsum text
    std::vector<std::string> result = loremIpsumSearcher.Search(lines, randomWords);

    //display result of the search
    Printer::PrintOnOutputandWaitForUserToDecideWhatIsNext(result, randomWords);


	return 0;
}

