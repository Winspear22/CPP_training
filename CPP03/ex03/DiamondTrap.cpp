#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap constructor called." << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap( std::string const & name ): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & copy )
{
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
    {
		this->_name = rhs._name;
        this->_Hit_points = rhs._Hit_points;
        this->_Energy_points = rhs._Energy_points;
        this->_Attack_damage = rhs._Attack_damage;
    }
	return (*this);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name : " << this->_name << std::endl;
	std::cout << "ClapTrap's name : " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack( const std::string & target )
{
	if (this->_Energy_points <= 0)
    {
        std::cout << "The DiamondClap \e[92m" << this->getname() << " has no energy." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mDiamondClap \e[92m" << this->getname() << "\033[0;36m attacks " << target << " causing \e[91m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	this->setmana(this->_Energy_points - 1);
}