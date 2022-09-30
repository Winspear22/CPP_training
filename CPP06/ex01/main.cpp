#include "Data.hpp"

int main( int argc, char **argv )
{
	(void)argv;
	if (argc != 3)
	{
		std::cout << "\033[1;31mError. Please use one argument. Ex : ./a.out popo 15\033[0m" << std::endl;
		return (FAILURE);
	}
	Data		*data = new Data;
	Data		*data_2;
	uintptr_t	i;

	data->str = argv[1];
	data->j = atoi(argv[2]);
	i = serialize(data);
	data_2 = deserialize(i);
	std::cout << "\033[1;31m==============\033[0m" << std::endl;
    std::cout << "\033[1;33mWHAT YOU TYPED\033[0m" << std::endl;
    std::cout << "\033[1;31m==============\033[0m" << std::endl;
	std::cout << "\033[1;32mstd::string = \033[1;37m" << data->str << "\033[0m" << std::endl;
	std::cout << "\033[1;32mint = \033[1;37m" << data->j << "\033[0m" << std::endl;
   	std::cout << "\033[1;31m=================================\033[0m" << std::endl;
    std::cout << "\033[1;33mADDRESS IN THE UINTPTR_T VARIABLE\033[0m" << std::endl;
    std::cout << "\033[1;31m=================================\033[0m" << std::endl;
    std::cout << "\033[1;34muintptr_t i = \033[1;37m" << i << std::endl;
	std::cout << "\033[1;31m====================================\033[0m" << std::endl;
    std::cout << "\033[1;33mPRODUCT OF THE REINTERPRETATION CAST\033[0m" << std::endl;
    std::cout << "\033[1;31m====================================\033[0m" << std::endl;
	std::cout << "\033[1;32mstd::string = \033[1;37m" << data_2->str << "\033[0m" << std::endl;
	std::cout << "\033[1;32mint = \033[1;37m" << data_2->j << "\033[0m" << std::endl;
   	
	delete data;
    return (SUCCESS);
}