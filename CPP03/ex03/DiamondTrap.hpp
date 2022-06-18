#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:

    DiamondTrap( void );
    DiamondTrap ( const DiamondTrap & copy );
    DiamondTrap( std::string const & name );
    ~DiamondTrap( void );
    DiamondTrap & operator=( DiamondTrap const & rhs );
    void whoAmI();
    void attack(const std::string & target);

private:
    std::string _name;
};

#endif