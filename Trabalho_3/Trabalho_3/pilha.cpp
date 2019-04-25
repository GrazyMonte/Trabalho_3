#include <stdlib.h>
#include <stdio.h>

float *pilha;
int tam_p;

void adiciona_p(int n)
{
	if (pilha == NULL || tam_p == 0)
	{
		tam_p = 1;
		pilha = new float[tam_p];
		pilha[0] = n;
	}
	else
	{
		float *temp;
		temp = new float[tam_p];
		for (int i = 0; i < tam_p; i++) temp[i] = pilha[i];
		delete[]pilha;
		tam_p++;
		pilha = new float[tam_p];
		for (int i = 0; i < tam_p - 1; i++) pilha[i] = temp[i];
		pilha[tam_p - 1] = n;
		delete[] temp;
	}
}

void remover_p()
{
	if (pilha == NULL || tam_p == 0)
	{
		printf("A pilha est%c vazia. N%co tem como remover um elemento.\n\n", 160, 198);
		system("pause");
	}
	else
	{
		float *temp;
		temp = new float[tam_p];
		for (int i = 0; i < tam_p; i++) temp[i] = pilha[i];
		delete[]pilha;
		tam_p--;
		pilha = new float[tam_p];
		for (int i = 0; i < tam_p; i++) pilha[i] = temp[i];
		delete[] temp;
	}
}

void visualizar_p()
{
	if (pilha == NULL)
	{
		printf("A pilha est%c vazia. N%co tem como visualizar.\n\n", 160, 198);
	}
	else
	{
		for (int i = 0; i < tam_p; i++) printf("%f\t", pilha[i]);
		printf("\n\n");
	}
	system("pause");
}

void delete_p()
{
	delete[] pilha;
}