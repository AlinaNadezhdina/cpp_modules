#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>
#include <set>

typedef struct BtcData
{
    unsigned int	year;
    unsigned int	month;
    unsigned int	day;
		double		value;
		bool operator<(const BtcData& otherData) const
		{
			if (year != otherData.year)
					return year < otherData.year;
			if (month != otherData.month)
			{
					return month < otherData.month;
			}
			return day < otherData.day;
		}

} t_btcData;

class BitcoinExchange
{
private:
	std::set<t_btcData> _exchangeSet;
	void	fillDateInBtcStructure(std::string &, BtcData &);	
	BitcoinExchange(const BitcoinExchange  &copy);
	BitcoinExchange &operator=(const BitcoinExchange &copy);
	
public:
	BitcoinExchange();
	~BitcoinExchange();

	void	readCsvFile(std::string fileName);
	void	checkAndCalculateInputFile(char *fileName);
	bool	isValidInputDate(const t_btcData &);
	bool	isValidValue(const std::string& value, t_btcData &);
	double	findRate( t_btcData &);
};



#endif