
#include "ClapTrap.hpp"

int main( void )
{
/*	ClapTrap instance("Adnen");
    instance.attack("Naruto");
    instance.tank(100);
    instance.heal(100);*/
    ClapTrap test("Le Bo Jack");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	test.setEnergy(1);
    test.setDmg(10);
	test.attack("Zer0");
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHp() << "\033[m" << std::endl;
	test.tank(42);
	std::cout << "\033[0;34mHP of my ClapTrap : " << test.getHp() << "\033[m" << std::endl;
	test.heal(31);
	std::cout << "\033[1;31mEnergy level of my claptrap : \033[m" << test.getEnergy() << std::endl;
	std::cout << "HP of my ClapTrap :" << test.getHp() << std::endl;
    test.tank(10);
    return (0);
}