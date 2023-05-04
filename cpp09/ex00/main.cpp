#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange bitExch;
	bitExch.readCsvFile("data.csv");
	bitExch.checkAndCalculateInputFile(argv[1]);
}