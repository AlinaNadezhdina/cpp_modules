#ifndef CONVERTER_HPP
# define CONVERTER_HPP
#include <iostream>
# include <iomanip>

class Converter
{
private:
	std::string		_input;

	char			_char;
	std::string		_char_status;

	int				_int;
	std::string		_int_status;

	float			_float;
	std::string		_float_status;

	double			_double;
	std::string		_double_status;

	void		isInputValidChar();
	void		isInputValidInt();
	void		isInputValidDouble();
	void		isInputValidFloat();
public:
	Converter();
	Converter(std::string input);
	~Converter();
	Converter(const Converter &conv);
	Converter &operator=(const Converter &conv);

	std::string	getInput() const;

	void		printChar() const;
	void		printInt() const;
	void		printDouble() const;
	void		printFloat() const;
	void		print() const;
};
#endif