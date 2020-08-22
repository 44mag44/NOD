/* DECOMPOSITION_NUMBER.C */

#include <stdio.h>

#include "header/selection_sort.h"

#define SIZE 7

int func(int num)
{
	int arr[num];
	int nod=1;

	printf("Введите кол-во цифр : ");
	scanf("%d", &num);
	if(num>SIZE)
		return 0;
	for(int i=0; i<num; i++)
	{
		printf("Введите число: ");
		scanf("%d", &arr[i]);
	}
	
	// сортировка массива
	selection_sort(arr);

	// высчитывает НОД
	for(int i=0; i<num;)
	{	
		for(int j=2; j<=arr[i]; j++)
		{
			if(arr[i]%j==0)
			{
				nod*=j;
				arr[i]/=j;
				break;
			}	
		}
	}

	return nod;
}
// составные и простые числа
void NOD()
{
	int num=0;
	printf("NOD = %d\n", func(num));
}
