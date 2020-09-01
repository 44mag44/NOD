#include <stdio.h>

#include "header/save_array_number.h"
#include "header/save_array_simple.h"
#include "header/search_simple.h"

//#define ROWS 20	// столбец
//#define COLS 20	// строки

// Вывод на экран
void input()
{
	// кол-во цифр
	int count=0;

	// ввод кол-ва цифр
	printf("Введите кол-во цифр для нахождения НОД: ");
	scanf("%d", &count);
	
	// запись новых данных
	array_number(count);
	array_simple();
	search_simple(count);
}

int main()
{
	// удаление старых данных
	remove("file/save_numbers.list");
	remove("file/save_simple.list");

	input();	

	return 0;
}
/*
Узнать сколько строк в файле

взять первую строку
взять первый символ
взять вторую строку
взять первый символ
если они равны запись в файл
иначе взять второй символ первой строки
и сравнить с первым символом второй строки

Если первая строка закончилась, то перейти  3-ей

Если это последняя строка, то взять числа из файла и сравнить их 

Если цифра в файле не подходит не к одной цифре, то НОД найти не удалось и пишем, что НОК этих чисел равен.   
*/








