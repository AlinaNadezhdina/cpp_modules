#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return(reinterpret_cast<Data *>(raw));
}

int	main()
{
    Data before;

    before.intVal = 234;
    before.strVal = "hello";

	std::cout <<"=======================" << std::endl;
    std::cout << "before.intVal : " << before.intVal << ", before.strVal : " << before.strVal << std::endl;

    uintptr_t storage = serialize(&before);
    Data *after = deserialize(storage);

    std::cout <<"=======================" << std::endl;
    std::cout << "after->intVal : " << after->intVal << ", after->strVal : " << after->strVal << std::endl;
	std::cout <<"=======================" << std::endl;
}