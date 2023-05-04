#include "Array.hpp"
#include "Array.cpp"

#define MAX_VAL 3

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
		std::cout << numbers[i] << '\t';
		std::cout << mirror[i] << std::endl;		
    }
    //SCOPE
    {
		std::cout<<"===========OPERATOR \"=\" Array<int> tmp = numbers; ================="<<std::endl;
        Array<int> tmp = numbers;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp[i] << std::endl;
		std::cout<<"===========COPY Constructor Array<int> test(tmp);==================="<<std::endl;
        Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << test[i] << std::endl;
		std::cout<<"============END ================="<<std::endl;
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
		std::cout << "try to set numbers[-2]..." << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "try to set numbers[MAX_VAL]..." << std::endl;
        numbers[MAX_VAL] = 0;
		std::cout << "trulala" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout<<"=========If numbers[i] changes  mirror[i] isn't change ============"<<std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		std::cout << numbers[i] << '\t';
		std::cout << mirror[i] << std::endl;
    }
	std::cout<<"=========The end ===================="<<std::endl;
    delete [] mirror;
    return 0;
}