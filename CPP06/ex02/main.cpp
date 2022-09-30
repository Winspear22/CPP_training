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
    {
        return (new A());
    }
	if (i % 3 == 1)
    {
        return (new B());
    }
	if (i % 3 == 2)
    {
        return (new C());
    }
	return (NULL);
}

int main( void )
{
    
    return (0);
}