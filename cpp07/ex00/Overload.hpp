#ifndef OVERLOAD_HPP
# define OVERLOAD_HPP

class Overload
{
private:
	int	_val;
public:
	Overload(int value);
	~Overload();
	Overload(const Overload &overl);
	Overload &operator=(const Overload &overl);

	int		getVal() const;
	bool operator<( Overload const & other ) const;
	bool operator>( Overload const & other ) const;
	bool operator<=( Overload const & other ) const;
	bool operator>=( Overload const & other ) const;
	bool operator!=( Overload const & other ) const;
	bool operator==( Overload const & other ) const;


};





# endif