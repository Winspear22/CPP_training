#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( std::string name ): AForm(name, 145, 137)
{
    this->_target = name;
	std::cout << "\033[0;32mShrubberyCreationForm Constructor called.\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & copy ): AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "\033[0;33mShrubberyCreationForm Copy Constructor called.\033[0m" << std::endl;	
	*this = copy;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "\033[0;31mShrubberyCreationForm Destructor called.\033[0m" << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "\033[0;34mShrubberyCreationForm Copy assignment operator called.\033[0m" << std::endl;
	if ( this != &rhs )
        this->_target = rhs._target;
	return (*this);
}

void ShrubberyCreationForm::execute( const Bureaucrat & executor ) const
{
    if (this->getsign_status() == NOT_SIGNED)
        throw CantExecuteFormException();
    if (executor.getgrade() > this->getgrade_to_sign() || executor.getgrade() > this->getgrade_to_execute())
        throw CantExecuteFormException();
    else
        this->_CreateTree();
}

void ShrubberyCreationForm::_CreateTree( void ) const
{

    std::string tree_name;

    tree_name = this->_target + "_shrubbery";
    std::ofstream outfile(tree_name.c_str());
    outfile << "       ###" << std::endl;
    outfile << "      #o###" << std::endl;
    outfile << "    #####o###" << std::endl;
    outfile << "   #o#\\#|#/###" << std::endl;
    outfile << "    ###\\|/#o#" << std::endl;
    outfile << "     # }|{  #" << std::endl;
    outfile << "ejm97  }|{" << std::endl;
    outfile.close();
    return ;
}
