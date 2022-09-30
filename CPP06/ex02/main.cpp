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

int main( void )
{
    Base *test;
    
	test = generate();
	identify(test);
	identify(*test);
	delete test;
    return (0);
}