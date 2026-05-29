#include <iostream>
#include <string>
#include <map>

int main()
{

	std::map<std::string, int> scores;

	std::string name = "alice";
	int newScore = 90;

	if (scores.find(name) == scores.end())
	{
		scores[name] = newScore;
	}
	else
	{
		if (newScore > scores[name])
		{
			scores[name] = newScore;
		}
	}

	name = "bob";
	newScore = 75;

	if (scores.find(name) == scores.end())
	{
		scores[name] = newScore;
	}
	else
	{
		if (newScore > scores[name])
		{
			scores[name] = newScore;
		}
	}
	

	name = "alice";
	newScore = 95;

	if (scores.find(name) == scores.end())
	{
		scores[name] = newScore;
	}
	else
	{
		if (newScore > scores[name])
		{
			scores[name] = newScore;
		}
	}

	name = "bob";
	newScore = 60;

	if (scores.find(name) == scores.end())
	{
		scores[name] = newScore;
	}
	else
	{
		if (newScore > scores[name])
		{
			scores[name] = newScore;
		}
	}

	for (auto& entry : scores)
	{
		std::cout << entry.first << ":" << entry.second << "\n";
	}

	return 0;
}