/*
	Name: EX04.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 14:27
	Description: Fa�a um algoritmo que calcule e imprima o seguinte
	somat�rio para os 100 primeiros termos da s�rie:
	S=(5/1)+(8/2)+(11/3)...
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float a=1.0, b=5.0, sum=0.0;
	for(i=1; i<=100; i++)
		{
			sum=sum+(b/a);
			a++;
			b=b+3;
		}
	printf("O SOMATORIO EH: %.2f", sum);
}
