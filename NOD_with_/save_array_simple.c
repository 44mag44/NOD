/*SAVE_ARRAY_SIMPLE_C */

#include <stdio.h>

int array_simple()
{
	// для чтения чисел из файла
	FILE *file_numbers;
	char *name_file_num="file/save_numbers.list";
	
	if((file_numbers=fopen(name_file_num, "r"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}

	// создание файла для записи простых чисел   
	FILE *file_simple;
	char *name_file_sim="file/save_simple.list";	

	if((file_simple=fopen(name_file_sim, "a"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}

	// разложение на простые числа и запись в файл
	int var=0;	// данные из файла
	int simple=2; // простое число
	
	printf("Разложение: ");
	while(!feof(file_numbers))
	{	
		printf("\n");
		fscanf(file_numbers, "%d", &var);
	
		for(; simple<=var; simple++)
		{
			for(; var%simple==0; var/=simple)
			{
				fprintf(file_simple, "%d ", simple);
				printf("%d ", simple);
			}
		}
		simple=2; // снова станет двойной
		fprintf(file_simple, "\n");
  	}

	// закрыть файлы
	fclose(file_simple);
	fclose(file_numbers);

	return simple;
}
