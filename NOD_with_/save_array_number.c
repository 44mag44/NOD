/* SAVE_ARRAY_NUMBER_C */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int array_number() // массив чисел
{
	// для записи данных в файл
	FILE *file_numbers;
	char *name_file="file/save_numbers.list";	

	if((file_numbers=fopen(name_file, "a"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}

	int count=0;	// кол-во цифр
	int *array_number;	// массив цифр

	// ввод кол-ва цифр
	printf("Введите кол-во цифр для нахождения НОД: ");
	scanf("%d", &count);		

	if(count<=0)
	{
		perror("ERROR NULL");
		exit(0);
	}

	// выделение памяти под массив: array_number[]
	array_number=(int*)malloc(count*sizeof(int));

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
	{
		fscanf(file_numbers, "%d", &array_number[i]);	
		printf(" %d ", array_number[i]);
	}
	printf("\n");

	// закрыть файл
	fclose(file_numbers);
	// осфобождение памяти: *array_number
	free(array_number);
	
	return 0;
}
