#include "structures.h"
#include <iostream>

void show_person(person& P)
{
	std::cout << "���: " << P.name << std::endl;
	std::cout << "�������: " << P.age << std::endl;
	std::cout << "���������: " << P.position << "\n";
	std::cout << "��������: " << P.salary << "\n";
}
