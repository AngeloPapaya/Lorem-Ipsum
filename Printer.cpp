#include "Printer.h"

//writes the vector to the output stream - each item is in a separate line
std::ostream &operator<<(std::ostream& stream, const std::vector<std::string>& _vector)
{
	for (auto &item : _vector)
	{
		stream << item << std::endl;
	}
	return stream;
}

//prints the result and waits for the user to decide what to do next
void Printer::PrintOnOutputandWaitForUserToDecideWhatIsNext(const std::vector<std::string>& lines, const std::vector<std::string>& wordsToSearch)
{
	std::cout << "WORDS TO SEARCH:" << std::endl << wordsToSearch << std::endl;
	std::cout << "RESULT:" << std::endl << lines;
}
