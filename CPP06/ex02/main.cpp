#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate( void)
{
    int i;

    srand(time(NULL));
	i = rand();

    if (i % 3 == 0)
        return (new A());
	else if (i % 3 == 1)
        return (new B());
	else if (i % 3 == 2)
        return (new C());
	return (NULL);
}

void identify( Base *p )
{
	if ((dynamic_cast<A *>(p)))
		std::cout << "The pointer to the class found is : A" << std::endl;
	if ((dynamic_cast<A *>(p)) == NULL)
		std::cout << "Error, the cast return was NULL for dynamic_cast<A *>(p)." << std::endl;
	if ((dynamic_cast<B *>(p)))
		std::cout << "The pointer to the class found is : B" << std::endl;
	if ((dynamic_cast<B *>(p)) == NULL)
		std::cout << "Error, the cast return was NULL for dynamic_cast<B *>(p)." << std::endl;
	if ((dynamic_cast<C *>(p)))
		std::cout << "The pointer to the class found is : C" << std::endl;
	if ((dynamic_cast<C *>(p)) == NULL)
		std::cout << "Error, the cast return was NULL for dynamic_cast<C *>(p)." << std::endl;
}

void identify( Base &p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "The reference to the class found is : A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "The reference to the class found is : B" << std::endl;
		(void)b;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "The reference to the class found is : C" << std::endl;
		(void)c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;;
	}
	

}


int main( void )
{
    Base *p;
    
	std::cout << "\033[1;31m===================================\033[0m" << std::endl;
    std::cout << "\033[1;33mGENERATING A RANDOM A, B OR C CLASS\033[0m" << std::endl;
    std::cout << "\033[1;31m===================================\033[0m" << std::endl;
	p = generate();
	std::cout << "\033[1;31m===================================================\033[0m" << std::endl;
    std::cout << "\033[1;33mIDENTIFYING THE REAL TYPE POINTED BY P WITH POINTER\033[0m" << std::endl;
    std::cout << "\033[1;31m===================================================\033[0m" << std::endl;
	identify(p);
	std::cout << "\033[1;31m=====================================================\033[0m" << std::endl;
    std::cout << "\033[1;33mIDENTIFYING THE REAL TYPE POINTED BY P WITH REFERENCE \033[0m" << std::endl;
    std::cout << "\033[1;31m=====================================================\033[0m" << std::endl;
	
	identify(*p);
	std::cout << "\033[1;31m==============================\033[0m" << std::endl;
    std::cout << "\033[1;33mDELETING AND DESTROYERS CALLED\033[0m" << std::endl;
    std::cout << "\033[1;31m==============================\033[0m" << std::endl;
	delete p;
    return (0);
}