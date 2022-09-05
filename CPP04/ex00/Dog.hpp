#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( std::string name );
	Dog( const Dog & copy );
	~Dog( void );
	Dog & operator=( Dog const & rhs );
protected:
    void makeSound( void );
	Dog( void );
};

#endif