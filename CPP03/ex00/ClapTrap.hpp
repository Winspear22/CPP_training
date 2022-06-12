#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iomanip>
# include <iostream>

class ClapTrap
{
public:
    ClapTrap( std::string name );
    ClapTrap( ClapTrap & copy );
    ~ClapTrap( void );
    ClapTrap & operator=( ClapTrap const & rhs );

	void 	attack( const std::string & target );
	void 	tank( unsigned int amount );
	void 	heal( unsigned int amount );
	int		getHp( void );
	int		getDmg( void );
	int 	getEnergy( void );
	std::string getName( void );
	void	setHp( int amount );
	void	setDmg( int amount );
	void	setEnergy( int amount );

private:
    std::string _name;
    int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
};

#endif