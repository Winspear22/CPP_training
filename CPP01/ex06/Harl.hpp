#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>

class Harl
{
public:
		enum choose_level
	{
		debug = 0,
		info,
		warning,
		error,
		default = -1
	};

	Harl( void );
	~Harl( void );

	void complain( std::string level );
private:
	choose_level _all_level;

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void _enum_pick_level(choose_level _all_level);
};

#endif