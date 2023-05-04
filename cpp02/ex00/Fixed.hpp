#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &obj);
	// = Перегрузка оператора присваивания (конструктор присваивания)
	Fixed &operator = (const Fixed &obj);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int	_fixedPointNum;
	static const int _fracionalBitNum = 8;
};

#endif