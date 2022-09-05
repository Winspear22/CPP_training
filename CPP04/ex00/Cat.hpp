#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( std::string name );
	Cat( const Cat & copy );
	~Cat( void );
	Cat & operator=( Cat const & rhs );
protected:
    void makeSound( void );
	Cat( void );
};

#endif