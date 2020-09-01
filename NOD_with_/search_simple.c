/* SEARCH_SIMPLE_C */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 256

char *safe_fgets(FILE *file)
{
	int pos = ftell(file);
	int len = 0;
	int c;

	while ( EOF != (c = getc(file)) && (++len, '\n' != c));

	if (len)
	{
		char *s=malloc(len+1);
		fseek(file, pos, SEEK_SET);
		fread(s, 1, len, file);
		s[len]='\0';
		
		return s;
	}
	else
		return 0;
}

// поиск простого числа
int search_simple(int count)
{
	// чтение данных из файла
	FILE *file_simple;
	char *name_file="file/save_simple.list";	
	if((file_simple=fopen(name_file, "r"))==NULL)
	{
		printf("Что то пошло не так =(");
		return 0;	
	}

	char *str;
	while ( 0 != (str = safe_fgets(file_simple)) )
	{
		fputs(str, stdout);
		free(str);
	}

	fclose(file_simple);

	return 0;
}
