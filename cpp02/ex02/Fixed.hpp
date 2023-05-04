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

	bool operator==(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static const Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	static const Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);

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