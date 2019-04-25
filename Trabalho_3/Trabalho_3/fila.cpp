#include <stdlib.h>
#include <stdio.h>

float *fila = NULL;
int tam_f;

void adiciona_f(int n)
{
	if (fila == NULL || tam_f == 0)
	{
		tam_f = 1;
		fila = new float[tam_f];
		fila[0] = n;
	}
	else
	{
		float *temp;
		temp = new float[tam_f];
		for (int i = 0; i < tam_f; i++) temp[i] = fila[i];
		delete[]fila;
		tam_f ++;
		fila = new float[tam_f];
		for (int i = 0; i < tam_f - 1; i++) fila[i] = temp[i];
		fila[tam_f - 1] = n;
		delete[] temp;
	}
}

void remover_f()
{
	if (fila == NULL || tam_f == 0) //Não consigo entrar aqui depois de tirar tudo
	{
		printf("A fila est%c vazia. N%co tem como remover um elemento.\n\n", 160, 198);
		system("pause");
	}
	else
	{
		float *temp;
		temp = new float[tam_f];
		for (int i = 0; i < tam_f; i++) temp[i] = fila[i];
		delete[]fila;
		tam_f--;
		fila = new float[tam_f];
		for (int i = 1; i < tam_f + 1; i++) fila[i - 1] = temp[i];
		delete[] temp;
	}
}

void visualizar_f()
{
	if (fila == NULL)
	{
		printf("A fila est%c vazia. N%co tem como visualizar.\n\n", 160, 198);
	}
	else
	{
		for (int i = 0; i < tam_f; i++) printf("%f\t", fila[i]);
		printf("\n\n");
	}
	system("pause");
}

void delete_f()
{
	delete[] fila;
}