#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap & copy );
    ~FragTrap( void );
    FragTrap & operator=( FragTrap const & rhs );

    void highFivesGuys( void );
	void attack( const std::string & target );

private:
};

#endif