/*
	Name: EX12.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 21:55
	Description: Fa�a um algoritmo que calcule e imprima o valor do n�mero pi, utilizando a seguinte s�rie:
	pi=(4/1-(4/3)+(4/5)-(4/7)+(4/9)...
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, p;
	float pi=0, j=1;
	for(i=1;i<=25000;i++)
		{
			if(i%2==0)
				p=-1;
			else
				p=1;
			pi=pi+p*(4/j);
			j=j+2;
		}
	printf("O VALOR DE PI �: %.5f", pi);
}
