#include <iostream>
#include <fstream>
#include <string>

int main()
{
	
	int lineCount = 0;
	std::string line;

	std::ifstream file("C:\\Users\\justm\\3D Objects\\test.txt");

	if (!file)
	{
		std::cout << "Failed to open file!" << std::endl;
		return 1;
	}

	std::cout << "File opened successfully!" << std::endl;

	while (std::getline(file, line))
	{
		lineCount++;
	}

	std::cout << "Line count: " << lineCount << std::endl;
	return 0;
}