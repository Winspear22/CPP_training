#include "Array.hpp"

/*int main( void )
{
	Array <int>Test;
    Array <int>Test2(10);
	Array <int>Test3(10);
	Array<std::string>stringArray(10);

	int i;
	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";
	i = 0;
	while (i < 10)
	{
		Test2[i] = i;
		std::cout << Test2[i] << std::endl;
		i++;
	}
	Test3 = Test2;
	i = 0;
	while (i < 10)
	{
		Test3[i] = i;
		std::cout << Test3[i] << std::endl;
		i++;
	}
	Array <int>Test4(Test3);
	i = 0;
	while (i < 10)
	{
		Test4[i] = i;
		std::cout << Test4[i] << std::endl;
		i++;
	}
	return (0);
}*/

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

#define MAX_VAL 750
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
 }