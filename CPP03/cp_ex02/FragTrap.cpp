#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap & copy )
{
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap copy constructor called." << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
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

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five." << std::endl;
	return ;
}

void FragTrap::attack( const std::string & target )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "\033[0;36mFragTrap \033[1;32m" << getname() << "\033[0;36m is dead. It cannot attack\033[m." << std::endl;
		return ;
	}
	if (this->_Energy_points <= 0)
    {
        std::cout << "\033[0;36mFragTrap \033[1;32m" << getname() << " \033[0;36mhas no energy to attack\033[m." << std::endl;
        return ;
    }
	std::cout << "\033[0;36mFragTrap \033[1;32m" << getname() << "\033[0;36m attacks " << target << " causing \033[1;35m" << this->_Attack_damage << " \033[0;36mpoints of damage!\033[m" <<std::endl;
	setmana(this->_Energy_points - 1);
	return ;
}