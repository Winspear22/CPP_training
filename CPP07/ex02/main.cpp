#include "Array.hpp"

int main( void )
{
	Array <int>My_tab;
    Array <int>My_tab2(10);
	Array <int>My_tab3(10);
	Array<std::string>My_string;
    Array<std::string>My_string2(5);
    Array<std::string>My_string3(5);

	int i;
	My_string2[0] = "Bonjour";
	My_string2[1] = "Comment ça va ?";
	My_string2[2] = "Je m'appelle Adnen";
	My_string2[3] = "J'ai 26 ans";
	My_string2[4] = "J'habite à Paris";
	std::cout << "\033[1;31m===================\033[0m" << std::endl;
    std::cout << "\033[1;33mDEFAULT CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m===================\033[0m" << std::endl;

	i = -1;
	std::cout << "\033[1;37mUsing Default constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab2[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab2[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Default constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string2[i] << std::endl;

	std::cout << "\033[1;31m============================\033[0m" << std::endl;
    std::cout << "\033[1;33mUSING = OPERATOR CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m============================\033[0m" << std::endl;

	My_tab3 = My_tab2;
	My_string3 = My_string2;
	i = -1;
	std::cout << "\033[1;37mUsing Array assignement overload constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab3[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab3[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Array assignement overload constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string3[i] << std::endl;

	std::cout << "\033[1;31m======================\033[0m" << std::endl;
    std::cout << "\033[1;33mUSING COPY CONSTRUCTOR\033[0m" << std::endl;
    std::cout << "\033[1;31m======================\033[0m" << std::endl;

	Array <int>My_tab4(My_tab3);
	Array <std::string>My_string4(My_string3);
	i = -1;
	std::cout << "\033[1;37mUsing Array copy constructor with int tab : \033[0m" << std::endl;
	while (++i < 10)
	{
		My_tab4[i] = i;
		std::cout << "i = " << i << " tab = " << My_tab4[i] << std::endl;
	}
	i = -1;
	std::cout << std::endl;
	std::cout << "\033[1;37mUsing Array copy constructor with string tab : \033[0m" << std::endl;

	while (++i < 5)
		std::cout << "i = " << i << " " << My_string4[i] << std::endl;

	std::cout << "\033[1;31m===========================================\033[0m" << std::endl;
    std::cout << "\033[1;33mTRYING TO ACCESS FORBIDDEN TAB MEMORY SPACE\033[0m" << std::endl;
    std::cout << "\033[1;31m===========================================\033[0m" << std::endl;
	try
    {
        My_tab2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_tab3[15] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_tab4[-14] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_string2[45] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
    {
        My_string2[-6] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        My_string2[-185] = "0";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	std::cout << "\033[1;31m==================\033[0m" << std::endl;
    std::cout << "\033[1;33mDESTRUCTORS CALLED\033[0m" << std::endl;
    std::cout << "\033[1;31m==================\033[0m" << std::endl;

	return (0);
}

/*int main(int, char**)
{
    std::cout << "Creating an empty array" << std::endl;
    Array<int> Test;
    std::cout << "Creating an array with content" << std::endl;
    Array<int> Test2(10);
    std::cout << "Size of test2 : " << Test2.size() << std::endl;
    std::cout << "Trying to modify element of the array at index -2" << std::endl;
    try
    {
        Test2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    std::cout << "Trying to modify element of the array at max + 1" << std::endl;
    try
    {
        Test2[10] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    std::cout << "Changing all values with random values\033[1;34m" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        Test2[i] = rand();
        std::cout << "Test2[" << i << "] : " << Test2[i] << std::endl;
    }
    std::cout << "\033[m";
    std::cout << "Trying to access an unexisting value : " << std::endl;
    try
    {
        std::cout << Test2[2] << std::endl;
        std::cout << Test2[4] << std::endl;
        std::cout << Test2[6] << std::endl;
        std::cout << Test2[12] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31m===========EXCEPTION==============" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cout << "===========EXCEPTION==============\033[m" << std::endl;
    }
    return 0;
}*/

/*int	main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";

	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}*/

/*#define MAX_VAL 750
 int main(int, char**)
 {
     Array<int> numbers(MAX_VAL);
     int* mirror = new int[MAX_VAL];
     srand(time(NULL));
     for (int i = 0; i < MAX_VAL; i++)
     {
         const int value = rand();
         numbers[i] = value;
         mirror[i] = value;
     }
   //  SCOPE
     {
         Array<int> tmp = numbers;
         Array<int> test(tmp);
     }

     for (int i = 0; i < MAX_VAL; i++)
     {
         if (mirror[i] != numbers[i])
         {
             std::cerr << "didn't save the same value!!" << std::endl;
             return 1;
         }
     }
     try
     {
         numbers[-2] = 0;
     }
     catch(const std::exception& e)
     {
         std::cerr << e.what() << '\n';
     }
     try
     {
         numbers[MAX_VAL] = 0;
     }
     catch(const std::exception& e)
     {
         std::cerr << e.what() << '\n';
     }

     for (int i = 0; i < MAX_VAL; i++)
     {
         numbers[i] = rand();
     }
     delete [] mirror;
     return 0;
 }*/