#include <stdio.h>
#include <malloc.h>

#include "header/save_array_number.h"
#include "header/save_array_simple.h"

#define ROWS 20	// столбец
#define COLS 20		// строки

int main()
{
	// удаление старых данных
	remove("file/save_numbers.list");
	remove("file/save_simple.list");
	
	// запись новых данных
	array_number();
	array_simple();
	
	return 0;
}
