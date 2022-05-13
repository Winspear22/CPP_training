#ifndef FIXED_HPP
# define FIXED_HPP

# include <iomanip>
# include <iostream>

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
private:
	int _i;
	static const int _bit = 8;
};

#endif