#include <iostream>
#include <string>

int main()
{
	std::string hardcode = "alex:55:toronto";

	int fColen = hardcode.find(":");

	std::string name = hardcode.substr(0, fColen);

	std::cout << name << "\n";

	int sColen = hardcode.find(":", fColen + 1);

	std::string ageS = hardcode.substr(fColen + 1, sColen - (fColen + 1));

	int age = std::stoi(ageS);

	std::string city = hardcode.substr(sColen + 1);

	std::cout << age << "\n";
	std::cout << city << "\n";

}