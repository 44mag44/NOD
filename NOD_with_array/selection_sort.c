#include <stdio.h>

int length(int *arr)
{
	int i;
	for(i=0; i<arr[i]; i++);
	return i;
}

int selection_sort(int *arr)
{
	int len;
	len=length(arr);
	int i, j, min, tmp;

	for(i=0; i<len-1; i++)
	{
		min=i;
		for(j=i+1; j<len; j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		tmp=arr[i];
		arr[i]=arr[min];
		arr[min]=tmp;
	}

	return len;
}

