#include <iostream>
#include <fstream>
#include <string>

int main()
{

	std::string line;

	std::ifstream input("input.txt");

	if (!input)
	{
		std::cout << "Failed to read input.txt!" << std::endl;
		return 1;
	}

	std::ofstream output("output.txt");

	if (!output)
	{
		std::cout << "Failed to create ouput.txt" << std::endl;
		return 1;
	}

	while (std::getline(input, line))
	{
		output << line << std::endl;
	}
	std::cout << "All lines copied from input.txt to output.txt" << "\n";
	return 0;
}