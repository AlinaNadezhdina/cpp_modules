#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int value);
	Fixed(const float value);

	// = Перегрузка оператора присваивания (конструктор присваивания)
	Fixed &operator = (const Fixed &obj);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int	_fixedPointNum;
	static const int _fracionalBitNum = 8;
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif