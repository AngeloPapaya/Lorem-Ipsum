#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <iterator>

//prints the results to the console and waits for user decision
class Printer
{
public:
	//prints the result and waits for the user to decide what to do next
	 static void PrintOnOutputandWaitForUserToDecideWhatIsNext(const std::vector<std::string>& lines, const std::vector<std::string>& wordsToSearch);
};

