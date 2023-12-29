//Program that counts number of letters read from stdin
#include <iostream>
#include <string>

void letterCounter(char * argv);

int main(int argc, char * argv[])
{
	if (argc == 2)
		letterCounter(argv[1]);
	else
		std::cout << "Unfortunately, the program couldn't recognize data" << std::endl;
	system("pause");
	return 0;
}

void letterCounter(char * argv)
{
	std::string userInput = argv;
	std::string countedLetters;
	for (int i = 0; i < userInput.length(); ++i) {
		int letterCount = 1;
		if (countedLetters.find(userInput[i]) != std::string::npos)
			continue;
		countedLetters.push_back(userInput[i]);
		for (int j = i + 1; j < userInput.length(); ++j)
			if (userInput[i] == userInput[j])
				letterCount++;
		std::cout << userInput[i] << " " << letterCount << std::endl;
	}
}