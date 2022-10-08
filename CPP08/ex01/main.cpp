#include "Span.hpp"

int main( void )
{
	int decompte;
	Span my_span(20000);

	decompte = 0;
    try
    {
		std::list<int> tab;
		std::vector<int> tab_2;
		srand(time(NULL));
		while (decompte < 20000)
		{
			const int value = rand();
			tab.push_back(value);
			tab_2.push_back(value);
			decompte++;
		}
		std::cout << tab.size() << std::endl;
		std::cout << tab_2.size() << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}