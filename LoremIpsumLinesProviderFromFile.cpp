#include "LoremIpsumLinesProviderFromFile.h"

#include <fstream>
#include <stdexcept>
#include <chrono>
#include <thread>

using namespace std;


// Gets the Lorem Ipsum text
vector<string> LoremIpsumLinesProviderFromFile::GetLoremIpsumLines()
{
    try
    {
        ifstream file(_fileName);
        if (!file)
        {
           throw runtime_error("unable to open lorem ipsum file");
        }

        vector<string> result;
        string currentLine;
        while (getline(file, currentLine))
        {
    //		//I heard this is very important to have threading supported in the application.
    //		//I decided to fulfil this requirement in this way - it's a little bit slower but 100% bulletproof!
    //		chrono::milliseconds duration(5);
    //		this_thread::sleep_for(duration);
            result.push_back(currentLine);

        }

        return result;
    }

	catch (const exception& e)
	{
	    std::cerr << "Error: " << e.what() << "\n";
	}
}
