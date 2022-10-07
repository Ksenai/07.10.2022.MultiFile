#pragma once
#include <iostream>
#include <string>

struct person {
	std::string name;
	int age = 0;
	std::string position = "empty";
	int salary = 0;
};

//Вывод инфы об объекте
void show_person(person& P);







