//Персональный шаблон проекта С++

#include <iostream>
#include "functions.h" //подкл заголовочного файла с прототипами функций
#include "structures.h"
#include "elements.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Функции
	/*cout << mean(5, 2) << endl;
	cout << absolute(-52) << endl;

	const int size = 5;
	int arr[size]{ 5, 10, 6, 1, 7 };
	show_arr(arr, size);*/

	//Структуры
	person tom{ "Tom", 20, "meneger", 50000 };
	show_person(tom);

	cout << _PI << endl;
	_ARR[0] = 8;
	cout << cercle(5);

	return 0;
}

