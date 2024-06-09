#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <chrono>
#include <thread>

// The class which loads the Lorem Ipsum lines from the file
class LoremIpsumLinesProviderFromFile
{
private:
	std::string _fileName;

public:
	//constructor
	explicit LoremIpsumLinesProviderFromFile(const std::string& fileName)
	{
		_fileName = fileName.c_str();
	}

	//Gets the lorem ipsum lines
	std::vector<std::string> GetLoremIpsumLines();
};

