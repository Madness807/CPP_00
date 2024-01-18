#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 1;
	
	if (argc < 2)
	{
		std::cout << "LOUD AND UNBEARBLE FEEDBACK NOISE" << std::endl;
		return 0;
	}
	while(i < argc)
	{
		std::string myString = argv[i];
		size_t j = 0;
		while (j < myString.length())
		{
			myString[j] = std::toupper(myString[j]);
			j++;
		}
		std::cout << myString;
		if(i < argc -1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return 0;
}