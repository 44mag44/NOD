/* SAVE_ARRAY_NUMBER_C */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int array_number(int count) // массив чисел
{
	// для записи данных в файл
	FILE *file_numbers;
	char *name_file="file/save_numbers.list";	

	if((file_numbers=fopen(name_file, "a"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}

	// выделение памяти под массив цифр
	int *array_number;
	array_number=(int*)malloc(count*sizeof(int));

	if(count<=0)
	{
		perror("ERROR: count <= 0");
		exit(0);
	}

	// запись множества чисел в файл
	for(int i=0; i<count; i++)
	{
		printf("Введите число №%d: ", i+1);	
		scanf("%d", &array_number[i]);	
		fprintf(file_numbers, "%d\n", array_number[i]);
	}

	// вывод множества чисел на терминал
	printf("\nЗаписано в \"%s\": ", name_file);
	for(int i=0; i<count; i++)
		printf(" %d ", array_number[i]);
	printf("\n");

	// осфобождение памяти: *array_number
	free(array_number);
	// закрыть файл
	fclose(file_numbers);
	
	return count;
}
