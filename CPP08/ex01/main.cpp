#include "Span.hpp"

int main( void )
{
	Span my_span(200);
    try
    {
		my_span.AddNumber();
		my_span.DisplayVector();
		std::cout << my_span.ShortestSpan() << std::endl;
       	std::cout << my_span.LongestSpan() << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}