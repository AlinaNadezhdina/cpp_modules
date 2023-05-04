#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr<<"Error: wrong arguments count!"<<std::endl;
		return 1;
	}
	std::string line;
	std::string fileName = argv[1];
	std::string fileReplace = argv[1] + (const std::string)".replace";
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream fileIn(fileName);
	std::ofstream fileOut(fileReplace);
	if (!fileIn || !fileOut)
	{
		std::cerr<<"Error: cannot open the file " <<fileName<< " or "<< fileReplace<< std::endl;
		fileIn.close();
		fileOut.close();
		return 1;
	}
	if (s1.empty() || s2.empty())
	{
		std::cout<<"Error: there is empty line s1 or s2" <<std::endl;
		fileIn.close();
		return 1;
	}
	if (fileIn.is_open())
	{
		size_t	i;
		while (getline(fileIn, line))
		{
			while(1)
			{
				i = line.find(s1);
				if (std::string::npos == i) //npos - это -1
					break;
				line.erase(i, s1.length());
				line.insert(i, s2);
			}
			fileOut << line<<std::endl;
		}
	}
	fileOut.close();
	fileIn.close();
		
	return 0;
}