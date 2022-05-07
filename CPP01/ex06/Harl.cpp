#include "Harl.hpp"

Harl::Harl( void )
{
    return ;
}

Harl::~Harl( void )
{
    return ;
}

void Harl::debug( void )
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::_enum_pick_level( choose_level level)
{
	if (level <= this->_all_level)
	{
		switch (level)
    	{
			case Harl::debug:
				this->debug();
				break ;
			case Harl::info:
				this->info();
				break ;
			case Harl::warning:
				this->warning();
				break ;
			case Harl::error:
				this->error();
				break ;
			default:
				this->default();
	}
	return ;
}

void Harl::complain( std::string level )
{
	int i;

	i = 0;
//	void (Harl::*user_level[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
//	std::string user_level[4] = {"debug", "info", "warning", "error"};
    






	/*while (i < 4)
	{
		if (level == user_level[i])
			(this->*select[i])();
		
		i++;
	}*/
	return ;
}