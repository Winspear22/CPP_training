#ifndef FIXED_HPP
# define FIXED_HPP

# include <iomanip>
# include <iostream>
# include <cmath>

class Fixed
{
public:

    Fixed( void );
	Fixed( const int i );
	Fixed( const float j );
	Fixed( const Fixed & n );
    ~Fixed( void );
	Fixed & operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
private:
	int _i;
	static const int _bit = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
int				ft_pow(int val, int pow);

#endif