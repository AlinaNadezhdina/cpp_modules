#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>

/*
 случаи, в которых понижающее приведение с использованием 
 оператора dynamic_cast не работает:
 Наследование типа private или типа protected.
 Классы, которые не объявляют или не наследуют классы с какими-либо
виртуальными функциями (и, следовательно, не имеют виртуальных таблиц). 
В примере, приведенном выше, если бы мы удалили виртуальный деструктор класса Parent, 
то преобразование через dynamic_cast не выполнилось бы.
 Случаи, связанные с виртуальными базовыми классами
*/
class Base
{
public:
	Base();
	virtual ~Base();
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};


# endif