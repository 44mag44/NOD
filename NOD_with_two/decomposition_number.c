/* DECOMPOSITION_NUMBER.C */

#include <stdio.h>

int func(int a,int b)
{
	int nod=1;
	a=0,b=0;
	printf("Введите число a: ");
	scanf("%d", &a);
	printf("Введите число b: ");
	scanf("%d", &b);
	
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}

	while(a>1 && b> 1)
	{
		for(int i=2; i<=a; i++)
		{
			if(a%i==0 && b%i==0)
			{
				nod*=i;
				a/=i;
				b/=i;
				break;
			}
			if(a%i==0)
			{
				a/=i;
				break;
			}
			if(b%i==0)
			{
				b/=i;
				break;
			}
		}
	}
	return nod;
}
// составные и простые числа
void NOD()
{
	int a=0,b=0;
	int nod=func(a, b);

	if(nod==1) 
		printf("-Простые числа\n")
	else
		printf("NOD = %d\n", nod);
}
