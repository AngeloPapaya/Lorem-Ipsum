#include "LoremIpsumLinesProviderFromFile.h"
#include "RandomWordsGenerator.h"
#include "LoremIpsumSearcher.h"
#include "Printer.h"

#include <iostream>

using namespace std;

int main()
{
	//load lines of lorem ipsum text
	LoremIpsumLinesProviderFromFile linesProvider("lorem_ipsum.txt");
	vector<string> lines = linesProvider.GetLoremIpsumLines();

    RandomWordsGenerator randomWordsGenerator;
    LoremIpsumSearcher loremIpsumSearcher;

//    for (auto line: lines) {
        //get few random words
        vector<string> randomWords = randomWordsGenerator.GetFewRandomWords(lines);
//        std::cout<<"RANDOM WORDS --- ";
//        for(auto r: randomWords)
//            std::cout<<r<<" --- ";
//        std::cout<<"\n";
        //search these words in the lorem ipsum text
//		auto data = loremIpsumSearcher.Search(lines, randomWords);
        vector<string> result = loremIpsumSearcher.Search(lines, randomWords);

		//display result of the search, break the loop if the user decides so

//		result.insert(result.end(), data->begin(), data->end() );
		Printer::PrintOnOutputandWaitForUserToDecideWhatIsNext(result, randomWords);
//    }

//    for (auto d:result)
//            std::cout<<d<<std::endl;


//	while (true)
//	{

//

//
//
//		//
//
//

	return 0;
}

