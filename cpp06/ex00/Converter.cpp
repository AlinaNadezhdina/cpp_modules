#include "Converter.hpp"

Converter::Converter():_input("0"){}

Converter::Converter(std::string input):_input(input),
	_char(0),
	_char_status("~"),

	_int(0),
	_int_status("~"),

	_float(0),
	_float_status("~"),

	_double(0),
	_double_status("~")
	
{
	isInputValidChar();
	isInputValidInt();
	isInputValidFloat();
	isInputValidDouble();
}

Converter::~Converter(){}

Converter	&Converter::operator=(const Converter &conv)
{
	if (this != &conv)
		this->_input = conv.getInput();
	return *this;
}

std::string		Converter::getInput() const
{
	return this->_input;
}

Converter::Converter(const Converter &conv):_input(conv._input)
{
	*this = conv;
}

void	Converter::isInputValidChar()
{
	try 
	{
		if (_input.length() == 1 && !std::isdigit(_input[0]))
			_char = static_cast<char>(_input[0]);	
		else if (std::stoi(_input) >= 0 && std::stoi(_input) <= 127)
			_char = static_cast<char>(std::stoi(_input));
		else
			throw (-42);
		if (std::isprint(_char))
			_char_status = "ok";
		else
			_char_status = "non displayable";	
	}
	catch(...)
	{
		_char_status = "impossible";
	}
}

void	Converter::isInputValidInt()
{
	try 
	{
		if (_input.length() == 1 && !std::isdigit(_input[0]) && std::isprint(_input[0]))
			_int = static_cast<int>(_input[0]);	
		else 
			_int = static_cast<int>(std::stoi(_input));
		_int_status = "ok";	
	}
	catch(...)
	{
		_int_status = "impossible";
	}
}

void	Converter::isInputValidFloat()
{
	try 
	{
		if (_input.length() == 1 && !std::isdigit(_input[0]) && std::isprint(_input[0]))
			_float = static_cast<float>(_input[0]);	
		else 
			_float = static_cast<float>(std::stof(_input));
		_float_status = "ok";	
	}
	catch(...)
	{
		_float_status = "impossible";
	}
}

void	Converter::isInputValidDouble()
{
	try 
	{
		if (_input.length() == 1 && !std::isdigit(_input[0]) && std::isprint(_input[0]))
			_double = static_cast<double>(_input[0]);	
		else 
			_double = static_cast<double>(std::stod(_input));
		_double_status = "ok";	
	}
	catch(...)
	{
		_double_status = "impossible";
	}
}

void	Converter::printChar() const
{
	std::cout << "char: ";
	if (_char_status == "ok")
		std::cout << _char;
	else
		std::cout << _char_status;
	std::cout << std::endl;
}

void	Converter::printInt() const
{
	std::cout << "int: ";
	if (_int_status == "ok")
		std::cout << _int;
	else
		std::cout << _int_status;
	std::cout << std::endl;
}

void	Converter::printFloat() const
{
	std::cout << "float: ";
	if (_float_status == "ok")
		std::cout << std::fixed << std::setprecision(1) << _float << "f";
	else
		std::cout << _float_status;
	std::cout << std::endl;
}

void	Converter::printDouble() const
{
	std::cout << "double: ";
	if (_double_status == "ok")
		std::cout << std::fixed << std::setprecision(1) << _double;
	else
		std::cout << _double_status;
	std::cout << std::endl;
}

void	Converter::print() const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}