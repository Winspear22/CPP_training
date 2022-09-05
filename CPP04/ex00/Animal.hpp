#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iomanip>
# include <iostream>

class Animal
{
public:
	Animal( std::string name );
	Animal( const Animal & copy );
	~Animal( void );
	Animal & operator=( Animal const & rhs );
protected:
	Animal( void );
    void makeSound( void );
	std::string type;
};

#endif