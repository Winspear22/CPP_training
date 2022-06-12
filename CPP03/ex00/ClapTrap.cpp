#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->_name = name;
	std::cout << "\033[1;33mConstructor called\033[0m" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap & copy )
{
	std::cout << "\033[1;33mCopy constructor called\033[0m" << std::endl;
    (void)copy;
/*	this->_name = copy.getName();
	this->_hit_points = copy.getHp();
	this->_energy_points = copy.getEnergy();
	this->_attack_damage = copy.getDmg();*/
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "\033[1;33mDestructor called\033[0m" << std::endl;
    return ;
}

std::string ClapTrap::getName( void )
{
	return (this->_name);
}

int	ClapTrap::getHp( void )
{
	return (this->_hit_points);
}

int	ClapTrap::getDmg( void )
{
	return (this->_attack_damage);
}

int ClapTrap::getEnergy( void )
{
	return (this->_energy_points);
}

void ClapTrap::setHp( int amount )
{
	this->_hit_points = amount;
	return ;
}

void ClapTrap::setDmg( int amount )
{
	this->_attack_damage = amount;
	return ;
}

void ClapTrap::setEnergy( int amount )
{
	this->_energy_points = amount;
	return ;
}

void ClapTrap::attack( const std::string & target )
{
	if (this->_energy_points <= 0)
	{
		std::cout << "Error, you don't have enough energy to attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m attacks \033[1;37m"
	<< target << "\033[0m, causing \033[1;32m"
	<< this->_attack_damage << "\033[0m points of damage! " << std::endl;
	std::cout << "You have lost 1 point of energy." << std::endl;
	setEnergy(_energy_points - 1);
	return ;
}

void ClapTrap::tank( unsigned int amount )
{
	if (this->_hit_points <= 0)
	{
		std::cout << "Your HP are " << this->_hit_points << std::endl;
		std::cout << "Your ClapTrat \033[1;32m" << this->_name << "\033[0m died." << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m tanks \033[1;32m" << amount
	<< "\033[0m of damages on his HP." << std::endl;
	this->_hit_points = this->_hit_points - amount;
	return ;
}

void ClapTrap::heal( unsigned int amount )
{
	if (this->_energy_points <= 0)
	{
		std::cout << "Error, you don't have enough energy to heal." << std::endl;
		return ;
	}
	std::cout << "ClapTrap \033[1;32m" << this->_name << "\033[0m heals \033[1;32m" << amount << "\033[0m of HP" << std::endl;
	std::cout << "You have lost 1 point of energy." << std::endl;
	setEnergy(_energy_points - 1);
	return ;
}