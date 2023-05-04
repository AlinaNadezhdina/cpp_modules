#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() 
{
	//создание фабрики
	IMateriaSource* src = new MateriaSource();

	//создание объектов
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());

	//персонаж
	ICharacter* me = new Character("me");

	//указатель родительского класса
	AMateria* tmp;

	//добавляем в первую ячейку массива и сохраняем указатель, тк будем удалять(unequip)
	tmp = src->createMateria("ice");
	me->equip(tmp);


	tmp = src->createMateria("cure");
	me->equip(tmp);
//me->unequip(1);
me->printMaterias();
	ICharacter* bob = new Character("bob"); 
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob; 
	delete me; 
	delete src;
	return 0; 
}