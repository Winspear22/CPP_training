/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:37:54 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/04 15:37:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "\033[0;33mIntern Constructor called.\033[0m" << std::endl;
	return;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "\033[0;33mIntern Copy Constructor called.\033[0m" << std::endl;
	return;
}

Intern::~Intern(void)
{
	std::cout << "\033[0;31mIntern Destructor called.\033[0m" << std::endl;
	return;
}

Intern &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	std::cout << "\033[0;34mIntern Copy assignment operator called.\033[0m" << std::endl;
	return (*this);
}

static AForm *ShrubberyCreationFormCreation(std::string target)
{
	AForm *Shrub = new ShrubberyCreationForm(target);
	return (Shrub);
}

static AForm *RobotomyRequestionCreation(std::string target)
{
	AForm *Robotomy = new RobotomyRequestForm(target);
	return (Robotomy);
}

static AForm *PresidentialPardonCreation(std::string target)
{
	AForm *President = new PresidentialPardonForm(target);
	return (President);
}

AForm *Intern::makeForm(std::string Form, std::string target)
{
	int i;
	std::string Form_types[3] = {"robotomy request", "shrubbery request", "pardon request"};
	AForm *(*fonction[3])(std::string target) = {RobotomyRequestionCreation, ShrubberyCreationFormCreation, PresidentialPardonCreation};

	AForm *Form_selectionned = NULL;
	i = -1;
	while (++i < 3)
	{
		if (Form_types[i] == Form)
		{
			Form_selectionned = fonction[i](target);
			std::cout << "\033[1;32mIntern creates\033[1;35m " << target << "\033[0m" << std::endl;
			return (Form_selectionned);
		}
		if (i == 2 && !Form_selectionned)
			throw ErrorFormCreationException();
	}
	return (Form_selectionned);
}
