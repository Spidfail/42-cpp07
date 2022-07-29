#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

	////////////////////////////////////////////////////////////////
	//////////////////////Initialisation////////////////////////////
	//
	std::cout << "Initialisation phase--------------" << std::endl << std::endl;
	std::cout << "Test to see if _sizeArray is accessible" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
	if (numbers.size() != MAX_VAL) {
		std::cout << "The size stored is wrong !" << std::endl;
		return 1;
	}
	std::cout << "Checked" << std::endl << std::endl;

	////////////////////////////////////////////////////////////////
	//////////////////////Test 1////////////////////////////////////
	//
	std::cout << "Test if Array works as a 'int *' array" << std::endl;
	std::cout << "Are they same value ?" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "Test passed" << std::endl << std::endl;
	////////////////////////////////////////////////////////////////
	//////////////////////Test 2////////////////////////////////////
	//
	std::cout << "Test with negative numbers" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "Test passed" << std::endl << std::endl;
	////////////////////////////////////////////////////////////////
	//////////////////////Test 3////////////////////////////////////
	//
	std::cout << "Test with overflowing numbers" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "Test passed" << std::endl << std::endl;

	////////////////////////////////////////////////////////////////
	//////////////////////Test 4////////////////////////////////////
	//
	std::cout << "Test to try if the 'operator[]' is assignable (as he should)" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		mirror[i] = numbers[i];
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
		if (numbers[i] != mirror[i]) {
			std::cerr << "operator[] is not assignable !" << std::endl;
			return 1;
		}
	}
	std::cout << "Test passed" << std::endl << std::endl;
	std::cout << std::endl << "Main test finished----------------" << std::endl << std::endl;

    delete [] mirror;//
    return 0;
}
