/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:38:09 by adaloui           #+#    #+#             */
/*   Updated: 2022/10/04 15:38:10 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string name ): AForm(name, 25, 5)
{
    this->_target = name;
	std::cout << "\033[0;34mPresidentialPardonForm Constructor called.\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & copy ): AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "\033[0;33mPresidentialPardonForm Copy Constructor called.\033[0m" << std::endl;	
	
	*this = copy;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "\033[0;31mPresidentialPardonForm Destructor called.\033[0m" << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	std::cout << "\033[0;34mPresidentialPardonForm Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
        this->_target = rhs._target;
	return (*this);
}

void PresidentialPardonForm::execute( Bureaucrat const & executor )
{
    if (this->getsign_status() == NOT_SIGNED)
        throw CantExecuteFormException();
    if (executor.getgrade() > this->getgrade_to_execute())
        throw CantExecuteFormException();
    else
		this->_Presidentialardon();
}

void PresidentialPardonForm::_Presidentialardon( void ) const
{
	std::cout << "\033[1;35m" << this->_target << "\033[1;37m was forgiven by Zaphod Beeblebox.\033[0m" << std::endl;
	return ;
}
